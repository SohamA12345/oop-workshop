#include <iostream>
#include <string>

using namespace std;

class Student {
  private: // Cannot be accessed by other parts of the code.
    string name; // Members variables or states
    int ID;
    double grade;

  public:
    // Construct function initialises the private variables.
    Student(string s_name, int s_ID, double s_grade);

    // Or
    //Student(string s_name, int s_ID, double s_grade) { 
      //name = s_name;
      //ID = s_ID;
      //grade = s_grade;
    //}

    // Behavior
    string get_name() {return name;} // Member functions
    int get_ID() {return ID;}
    double get_grade() {return grade;}
  
    void set_name(string new_name) {name = new_name;}
    // void set_ID (int new_ID) {ID = new_ID;}
    void set_grade(double new_grade) {grade = new_grade;}

    bool is_pass();
};

Student::Student(string s_name, int s_ID, double s_grade) {
  name = s_name;
  ID = s_ID;
  grade = s_grade;
}

bool Student::is_pass() {
  if (grade < 50) {
    return false;
  } else {
    return true;
  }
}

int main() {
  Student s1("Soham", 1922802, 100.00); // Construct must be there while instantiating a class.

  s1.set_name("Ham");
  s1.set_grade(90.66);
  
  cout << s1.get_grade() << " " << s1.get_ID() << " " << s1.get_name() << endl;

  cout << s1.is_pass() << endl;

  return 0;
}