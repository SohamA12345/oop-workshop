#include "Grade.h"

Grade::Grade() {}

Grade::Grade(int student_id, int value, std::string assignment, int course_id) : student_id(student_id), value(value), assignment(assignment), course_id(course_id) {}

Grade::~Grade() {}