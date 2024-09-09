#include "Gradebook.h"

Gradebook::Gradebook() {

}

void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value) {
  grades = new Grade(stud_id, value, assignment, course_id);
}

Gradebook::~Gradebook()
{
}