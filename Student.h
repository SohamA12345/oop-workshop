#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Person.h"

class Student : public Person
{
  protected:
    int id;
  public:
    Student();
    Student(int id);
    ~Student();
};

#endif