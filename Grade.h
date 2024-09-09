#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade {
	public:
		int student_id;
		int value;
		std::string assignment;

		Grade();
		Grade(int student_id, int value, std::string assignment);
		~Grade();
};

#endif