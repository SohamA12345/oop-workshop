// Good Flow chart on the lecture on polymorphism. Polymorphism is the same object or function that behaves differently in different scenarios.
#include <iostream>
#include <string>
using namespace std;

class A {
  protected:
    int _s;
  public:
    A(int s) : _s(s) {}
    A() : A(-1) {}
    virtual void print() {cout << "S = " << this->_s << endl;} // Runtime polymorphism aka dynamic or late binding.
    // Tells the compiler to "wait" until function is used in the program.
    // Decide which definition to use based on calling object
};

class B : public A {
  private:
    double _k;
  public:
    B(int s, double k) : A(s), _k(k) {}
    B() : B(0, 0) {}

    void print() {
      cout << "S = " << this->_s << "K =" << this->_k << endl;
    }
};

void test(A* a) {
  a->print();
}

class C : public A {
  private:
    string _str;
  public:
    C(int s, string str) : A(s), _str(str) {}
    C() : C(0, "") {}

    void print() {
      cout << "S = " << this->_s << "Str =" << this->_str << endl;
    }
};

int main() {

  A* a1;
  B b1(500, 0.25865);

  a1 = &b1; // A pointer to a base class can point at an object from a derived class. *not the other way around*
  // A parent pointer can hold one of its child classes.

  a1->print(); // Static binding as the compiler knows the object belongs to this class then goes to the definition and finds the function.
  // Eventhough the pointer is pointing to parent class. // Always statically linked to class A's print.
  // cannot accept base class so the fix is Virtual function.

  A a2(564);
  B b2(500, 0.25865);

  test(&a2); // As different object is put on, it will use the virtual to decide .
  test(&b1); 

  A* a[3];

  // Array that holds different class's objects.
  a[0] = new B(); // S = 0k =0
  a[1] = new C(); // S = 0Str = 
  a[2] = new A(); // S = -1

  for (int i = 0; i < 3; i++) {
    test(a[i]); // Goes to the different classes' object's print function.
  }

  return 0;
}