#include "Grade.h"

Grade::Grade() {}

Grade::Grade(int student_id, int value, std::string assignment) : student_id(student_id), value(value), assignment(assignment) {}

Grade::~Grade() {}