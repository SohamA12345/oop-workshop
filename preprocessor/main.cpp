// g++ server.cpp -c creates server.o
// This ensure no one can read server.cpp as it contain confidential code.

#include <iostream> //<> bracket include file in the "include" folder
#include "temp/server.h" //"" includes a file from given path when compiled together

using namespace std;

#define MAX_ARRAY_SIZE 6 // Defines a value during compilation

int main() {
  int array[MAX_ARRAY_SIZE]; // Cannot redifine or assign value to MAX_ARRAY_SIZE
  Server test;
  string pasword;

  cin >> pasword;

  test.login(pasword);
  test.printLoginStatus();

  Justtrying();
}