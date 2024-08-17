// g++ server.cpp -c creates server.o
// This ensure no one can read server.cpp as it contain confidential code.

#include <iostream> //<> bracket include file in the "include" folder
#include "temp/server.h" //"" includes a file from given path when compiled together

using namespace std;

int main() {
  Server test;
  string pasword;

  cin >> pasword;

  test.login(pasword);
  test.printLoginStatus();

  Justtrying();
}