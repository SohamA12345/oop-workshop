//Cpp files includes declaration of the functions.

#include <string>
#include <iostream>
#include "server.h"

using namespace std;

void Server::login(string password) {
  cout << this->password << '\t' << password << endl;
  if(this->password == password) { // this can be used to access private variables
    this->isLoggedIn = true;
  }
}

void Server::printLoginStatus() {
  if(this->isLoggedIn) {
    cout << "I am logged in" << endl;
  } else {
    cout << "Try another password" << endl;
  }
}

Server::Server() {
  
}

Server::~Server() {

}


int Justtrying() {
  cout << "Called function" << endl;
  return 0;
}