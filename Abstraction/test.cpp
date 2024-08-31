// Abstract class is a way to generalise concepts from which more specific classes can be derived.
#include <iostream>
using namespace std;

struct Point {
  double x;
  double y;
};


class Shape {
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

    double get_area() {return side * side;}
};

class Circle : public Shape {
  private:
    double r;
  public:
    Circle() {}

    Circle(double x, double y, double r) : Shape(x,y), r(r) {}

    double get_area() {return r * r * 3.14;}
};

void test(Shape* s) {
  cout << "The area is:" << s->get_area() << endl;
}

int main() {
  
  // Shape a; cannot call abstract classes

  //Square s; will give error until there is a overrid in child class square as the class square turns abstract itself.

  Shape* square = new Square(10, 20, 5);
  Shape* circle = new Circle(1, 10, 3.2);

  test(square);
  test(circle);

  return 0;
}