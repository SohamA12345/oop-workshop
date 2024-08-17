#include <iostream> //<> bracket include file in the "include" folder
#include "Justtrying.h"
#include "temp/server.cpp" //"" includes a file from given path when compiled together


using namespace std;

int main() {
  Server test;
  string pasword;

  cin >> pasword;

  test.login(pasword);
  test.printLoginStatus();
  Justtrying();
}