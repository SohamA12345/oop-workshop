#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>

class Gradebook
{
protected:
  int stud_id;
  int course_id;
  std::string assignment;
  int value;
public:
  Gradebook(/* args */);
  ~Gradebook();
};

#endif