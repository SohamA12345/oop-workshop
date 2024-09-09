#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>
#include "Course.h"

class University {
      private: 
        std::vector <Course> courses;
        std::string name;
        std::string location;
      public:
        University();
        University(std::string name, std::string location);
        void addCourse(int id, std::string name);
        ~University();
};

#endif