#include "Course.h"
#include "Person.h"

void Course::addPerson(Person* p) {
  persons = new Person*(p);
}