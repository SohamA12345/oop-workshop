#ifndef COURSE_H
#define COURSE_H

#include <string>

#include "Instructor.h"
#include "Person.h"

class Course {
 public:
  Person** persons;
  std::string name;
  int id;
  void addPerson(Person* p);
};

#endif