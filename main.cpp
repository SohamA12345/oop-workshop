#include "University.h"
#include "Course.h"
#include "Grade.h"
#include "Instructor.h"
#include "Person.h"
#include "Student.h"

int main() {
  University Flinders;
  Student* feras = new Student (1234);

  Flinders.addCourse(1234, "foo");

  Flinders.courses[1234].addPerson(feras);

  Flinders.courses[1234].persons[1234];

  return 0;
}