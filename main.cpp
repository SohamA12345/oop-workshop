#include "ws11.cpp"
int main() {
  RecordsManager receordM("test_clean.txt");
  RecordsManager receordM("test_corrupt1.txt");
  RecordsManager receordM("test_corrupt2.txt");

  Records myRecords;

  // reads records
  receordM.read(myRecords);

  int sum = 0;
  for (int i = 0; i < myRecords.size(); i++) {
    sum += myRecords[i];
  }

  cout << sum << endl;
  return 0;
}