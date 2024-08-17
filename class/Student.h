#include <iostream>
#include <string>

using namespace std;

// Classes define behavior of objects and thier states.
class Student {
  private: // Cannot be accessed by other parts of the code.
    string name; // Members variables or states
    int ID;
    double grade;

  public:
    // Construct function initialises the private variables. Best to separate definition from declaration.
    // Must match the name of header file.
    Student();
    Student(string s_name, double s_grade);
    Student(string s_name, int s_ID, double s_grade);

    ~Student();

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
    void set_ID (int new_ID) {ID = new_ID;}
    void set_grade(double new_grade) {grade = new_grade;}

    bool is_pass(); // Best to separate member functions if even slightly complex.
};

Student::Student(): name(""), ID(1), grade(0.0) { // Initialises private member variables // Must have a default constructer.
  cout << "An  object of class Student was created\n";
}

Student::Student(string s_name, double s_grade): name(s_name), grade(s_grade), ID(0) { // Better way than later method.
}

Student::Student(string s_name, int s_ID, double s_grade) { 
  name = s_name;
  ID = s_ID;
  grade = s_grade;
}

Student::~Student() { // Automatically called to delete object once out of scope or while deleting a pointer, class dynamic array.
  cout << "A student object was deleted\n";
}

bool Student::is_pass() {
  if (grade < 50) {
    return false;
  } else {
    return true;
  }
}