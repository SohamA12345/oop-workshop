#include "University.h"
#include "Course.h"

University::University() {

}

University::University(std::string name, std::string location) {

}

void University::addCourse(int id, std::string name) {
  courses.push_back(courses[id, name]);
}