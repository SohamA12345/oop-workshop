// Abstract class is a way to generalise concepts from which more specific classes can be derived.
#include <iostream>
using namespace std;

struct Point {
  double x;
  double y;
};

class Printable{ // Pure abstract class to make a interface
  public:
    virtual void print() = 0; // The purpose of a interface is to implement a feature in all classes.
};

class Shape : public Printable {
  protected:
    Point _centre; // Whenever require to access a parent class's variable members, a constructer must be used.

  public:
  // Eventhough the class is abstract and nerver called in main, the child classes do require variables abstract class's variable initialised.
    Shape(double x, double y) {
      _centre.x = x;
      _centre.y = y;
    }

    Shape() : Shape(0,0) {}

    virtual double get_area() = 0;
};

class Square : public Shape {
  private:
    double side;
  public:
    Square() {}

    Square(double x, double y, double side) : Shape(x,y), side(side) {}

    double get_area() {return side * side;} // Must have this or turns into abstract class

    void print() { // Must have this or turns into abstract class
      cout << "This is a square with side = " << side << endl;
    }
};

class Circle : public Shape {
  private:
    double r;
  public:
    Circle() {}

    Circle(double x, double y, double r) : Shape(x,y), r(r) {}

    double get_area() {return r * r * 3.14;} // Must have this or turns into abstract class

    void print() { // Must have this or turns into abstract class
      cout << "This is a circle with r = " << r << endl;
    }
};

void test(Shape* s) {
  cout << "The area is:" << s->get_area() << endl;
}

class Person : public Printable {
  private:
    string name;
  public:
    string get_name() {return name;}
    void set_name(string name) {this->name = name;}

    void print() { // Must have this or turns into abstract class
      cout << "This is a person named: " << name << endl;
    }
};

void print_summary(Printable* obj) { //Garentees that the obj is printable and has print function.
  obj->print();
}

int main() {
  
  // Shape a; cannot call abstract classes

  //Square s; will give error until there is a overrid in child class square as the class square turns abstract itself.

  Shape* square = new Square(10, 20, 5);
  Shape* circle = new Circle(1, 10, 3.2);

  test(square);
  test(circle);

  Person* person = new Person(); // Must be a pointer as using polymorphism.

  person->set_name("Feras");

  print_summary(person);
  print_summary(square);
  print_summary(circle);

  return 0;
}