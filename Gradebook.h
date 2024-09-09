#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>

class Gradebook
{
public:
  int stud_id;
  int course_id;
  std::string assignment;
  int value;

  Gradebook();
  void addGrade(int stud_id, int course_id, std::string assignment, int value);
  ~Gradebook();
};

#endif