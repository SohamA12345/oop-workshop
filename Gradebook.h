#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
#include "Grade.h"
#include "University.h"

class Gradebook
{
public:
  Grade* grades;

  Gradebook();
  void addGrade(int stud_id, int course_id, std::string assignment, int value);
  ~Gradebook();
};

#endif