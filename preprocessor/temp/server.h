// Header files include all the definitions for the functions.

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
    void login(string password);

    void printLoginStatus();
    
    Server();
    ~Server();
};

#endif

#ifndef JUST_T
#define JUST_T
int Justtrying();
#endif