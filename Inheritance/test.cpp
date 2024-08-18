// For mode of inheritance see the important table in lecture.

#include <iostream>
#include <string>

using namespace std;

class A { // Base class
  private:
    int a;

  protected:  // Protected will cause int a to be a private variable in the derived classes.
    int a;

  public:
    void set_a(int a) {
      this->a = a;
    }

    int get_a() const {
      return a;
    }
};

class B : public A { // Inherating A with public mode. All the stuff in private is hidden.
  private:
    double x;
  public:
    void set_x(double x) {this->x = x;} // this helps with finding member variables in class.

    void set_a(int new_a) {
      if(new_a < 0) {
        A::set_a(0); // Cannot access a thus a = 0 doesn't work.
      } else {
        A::set_a(new_a); // Access the parent member functions, variables.
      }
    }

    double foo() {
      return x*(get_a());
    }
};

int main() {
  A a;
  B b;

  a.set_a(-50);
  b.set_a(50);
  cout << a.get_a() << endl;

  b.set_a(10);
  b.set_x(0.2);
  cout << b.foo() << endl;

  return 0;
}