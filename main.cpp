#include <iostream> //<> bracket include file in the "include" folder
#include "temp/server.cpp" //"" includes a file from given directory when compiled together

using namespace std;

int main() {
  Server test;
  string pasword;

  cin >> pasword;

  test.login(pasword);
  test.printLoginStatus();
  Justtrying();
}