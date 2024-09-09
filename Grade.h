#ifndef GRADE_H
#define GRADE_H

#include <string>
#include "Student.h"
#include "Course.h"

class Grade {
	public:
		int student_id;
		int value;
		int course_id;
		std::string assignment;

		Grade();
		Grade(int student_id, int value, std::string assignment, int course_id);
		~Grade();
};

#endif