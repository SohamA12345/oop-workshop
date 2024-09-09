#include "Gradebook.h"

Gradebook::Gradebook(/* args */) {

}

void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value) {
  this->stud_id = stud_id;
  this->course_id = course_id;
  this->assignment = assignment;
  this->value = value;
}

Gradebook::~Gradebook()
{
}