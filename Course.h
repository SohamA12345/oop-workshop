#ifndef COURSE_H
#define COURSE_H

#include "Instructor.h"
#include "Person.h"
#include <string>

class Course {
 protected:
  Person** persons;
  string name;
	int id;
};

#endif