/*
 C++ allows us to define our own types through structs and classes.
 Operator overloading allows us to define what C++ operators(+,-)
 Do to our specified types

Example without operator overloading:
    Point a(1, 2);
    Point b(3, 4);
    Point c = a.add(b);  // We need to call add method 
Example with operator overloading:
  Point c = a + b 
    This feels more natural to do and read.
*/

#include <iostream>
using namespace std;

class Point {
    public:
     int x, y ;
     Point(int a , int b ):x(a), y(b) {}

     Point operator+(const Point&other) {
        return Point(x + other.x , y+other.y);
     }

     void display() {
        cout<< "(" << x << ","<< y <<")" <<endl;
     }
};

int main() {
    Point p1(1,2);
    Point p2(3,4);

    Point p3 = p1 + p2;
    p3.display();
}