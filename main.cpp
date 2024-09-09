#include "University.h"
#include "Course.h"
#include "Grade.h"
#include "Instructor.h"
#include "Person.h"
#include "Student.h"

int main() {
  University Flinders;
  Person* feras = new Person ("Feras");

  Flinders.addCourse(1234, "foo");

  Flinders.courses[1234].addPerson(feras);

  return 0;
}