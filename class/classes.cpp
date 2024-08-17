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
    int* test_array;
    int size;

    // Construct function initialises the private variables. Best to separate definition from declaration.
    Student(string s_name, int s_ID, double s_grade);
    Student(int size);

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

    bool is_pass(); // Best to separate member functions if even slightly complex.

    int* begin() { // Begining of the array
      return test_array;
    }

    int* end() { // End of the array
      return test_array+size;
    }
};

Student::Student(string s_name, int s_ID, double s_grade) : name(s_name), ID(s_ID), grade(s_grade) {}
/*Or 
Student::Student(string s_name, int s_ID, double s_grade) {
  name = s_name;
  ID = s_ID;
  grade = s_grade;
}
*/

Student::Student(int size) : size(size) { // Creates an array in heap.
  test_array = new int[size];
}

bool Student::is_pass() {
  if (grade < 50) {
    return false;
  } else {
    return true;
  }
}

int main() {
  // Object instantiated.
  Student s1("Soham", 1922802, 100.00); // Construct must be there while instantiating a class.

  s1.set_name("Ham");
  s1.set_grade(90.66);
  
  cout << s1.get_grade() << " " << s1.get_ID() << " " << s1.get_name() << endl; // 90.66 1922802 Ham

  cout << s1.is_pass() << endl; // 1

  // Using range
  Student s2(3);

  for (int i : s2) { // Accessing range of s2.
    i += 1;
    s2.test_array[i] = i;
    cout << s2.test_array[i] << '\t';
  }

  cout << endl;

  delete [] s2.test_array;

  return 0;
}