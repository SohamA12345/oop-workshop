#include <iostream>
#include <fstream>
#include <string>

#include "Student.h"

using namespace std;

class Classroom
{
  private:
    int class_size;
    Student* student_records;
  public:
    // Constructor/Destructors
    Classroom();
    Classroom(int a_class_size);
    ~Classroom();

    void read_students_records(string filename) {
      ifstream students_records_file;
      students_records_file.open(filename);

      for (size_t i = 0; i < class_size; i++)
      {
        string name;
        int id;
        double grade;

        students_records_file >> name >> id >> grade;

        student_records[i].set_name(name);
        student_records[i].set_ID(id);
        student_records[i].set_grade(grade);
      }
      
    }

    void print_classroom() {
      for (size_t i = 0; i < class_size; i++)
      {
        cout << student_records[i].get_name() << "|" << student_records[i].get_ID() << "|" << student_records[i].get_grade() << endl;
      }
      
    }
};


Classroom::Classroom() {
  class_size = 0;
  student_records = new Student[class_size];
}

Classroom::Classroom(int a_class_size) : class_size(a_class_size) {
  student_records = new Student[class_size];
}

Classroom::~Classroom()
{
  delete [] student_records;
}


Student* student_factory() {
  Student* k = new Student();

  Student a;

  return k; // Deletes a pointer k not the student dynamic array.
}

int main () {

  /*First Section*/
  Student s1; // First construct without any parameters

  Student *p = &s1;

  cout << p->get_grade() << endl; // Must use the -> when pointing to a class.
  cout << s1.get_grade() << endl; // Same as the last output.

  Student *p1 = new Student();

  cout << p1->get_grade() << endl;

  delete p1;

  /*Second section*/
  Student* p2 = student_factory(); // Student a get created and deleted in the function as it is out of scope after return.

  cout << p2->get_grade() << endl;

  delete p2;

  /*Third section*/
  Student* a = new Student [5]; // Created 5 objects using default constructer Student().

  for (size_t i = 0; i < 5; i++)
  {
    cout << a[i].get_ID() << endl;
  }
  
  delete [] a;

  /*Forth Section*/
  Classroom oop2022(5);

  oop2022.read_students_records("classroom.txt");

  oop2022.print_classroom();
  
  return 0;
}