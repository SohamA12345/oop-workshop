#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
// vector of int.
// used to store the records
typedef vector<int> Records;
// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
 private:
  fstream _file;
  string _filename;

 public:
  RecordsManager(string filename) : _filename(filename) {}
  void read(Records& records) {
    _file.open(_filename, ios::in);
    if (_file.is_open()) {
      string line;
      while (std::getline(_file, line)) {
        for (size_t i = 0; i < line.size(); i++) {
          if ((line[i] < 'z' && line[i] > 'a') ||
              (line[i] < 'Z' && line[i] > 'A')) {
            _file.close();
            throw runtime_error("Alphabents!");
          }
        }

        int sum = 0;
        for (size_t i = 0; i < line.size(); i++) {
          sum += (line[i] - '0');
        }

        if (sum > 47) {
          _file.close();
          throw range_error("Out of range");
        }

        records.push_back(stoi(line));
      }
      _file.close();
    }
  }
};

int main() {
  // RecordsManager receordM("test_clean.txt");
  RecordsManager receordM("test_corrupt1.txt");
  // RecordsManager receordM("test_corrupt2.txt");

  Records myRecords;

  try {
    // reads records
    receordM.read(myRecords);
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  // calculate and print out the sum
  int sum = 0;
  for (size_t i = 0; i < myRecords.size(); i++) {
    sum += myRecords[i];
  }
  cout << sum << endl;
  return 0;
}