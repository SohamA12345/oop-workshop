#include <iostream>
#include <string>

using namespace std;

class IdGenerator {
  private:
    int id;
  public:
    IdGenerator(int initialId) {this->id = initialId;}
    IdGenerator(string initialId) {this->id = stoi(initialId);}
    IdGenerator() : IdGenerator(10) {}
    void setId(int id) {id = id;}
    int getId() {return id;}
    ~IdGenerator() {}
};

int main() {
  IdGenerator* id = new IdGenerator[3] {0, 2, {"123"}}; // Must be same type to initialise the constructor or put additional braces.
  for (int i = 0; i < 3; i++) {
    cout << id[i].getId() << endl;
  }
  delete[] id;
  return 0;
}