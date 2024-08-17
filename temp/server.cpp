#include "Justtrying.h"

#ifndef SERVER_DECLARATION
#define SERVER_DECLARATION

#include <string>
#include <iostream>

using namespace std;

class Server
{
  private:
    bool isLoggedIn = false;
    string password = "password123";
  public:
    void login(string password) {
      cout << this->password << '\t' << password << endl;
      if(this->password == password) { // this can be used to access private variables
        this->isLoggedIn = true;
      }
    }

    void printLoginStatus() {
      if(this->isLoggedIn) {
        cout << "I am logged in" << endl;
      } else {
        cout << "Try another password" << endl;
      }
    }

    // Server();
    // ~Server();
};

// Server::Server() {
  
// }

// Server::~Server() {

// }

#endif

int Justtrying() { // Declaration of a function
  cout << "Called a function" << endl;
  return 0;

}