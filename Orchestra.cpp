#include "Orchestra.h"

Orchestra::Orchestra() : Orchestra(0) {}
Orchestra::Orchestra(int size) : max_size(size), musicians(new Musician[size]) {}

int Orchestra::get_current_number_of_members() {return this->size;}

bool Orchestra::has_instrument(std::string instrument) {
  for (int i = 0; i < this->size; i++) {
    if(this->musicians->get_instrument() == instrument) {
      return true;
    } else {return false;}
  }
}

Musician* Orchestra::get_members() {
  return this->musicians;
}

bool Orchestra::add_musician(Musician new_musician) {
  if (size >= max_size) {
    return false;
  } else {
    this->musicians[size] = new_musician;
    return true;
  }
}

Orchestra::~Orchestra() {delete [] this->musicians;}