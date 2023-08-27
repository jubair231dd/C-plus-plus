#include <cmath>
#include<iostream>
using namespace std;
class Point {
private:
    double x, y;
public:
    Point(){
        x = 0;
        y = 0;
    }//default constructor
    Point(double x, double y){
        this->x = x;
        this->y = y;
    }//regular constructor
    double getX() const 
    { return x; }
    double getY() const 
    { return y; }
};//end of class point 

class Circle2D {
private:
    Point center;
    double radius;
public:
    Circle2D(){
        center = Point();
        radius = 1;
    }//defualt constructor 
    Circle2D(double x, double y, double radius){
        center = Point(x,y);
        this->radius = radius;
    }//regular constructor
    Point getCenter() const 
    {
        return center; 
    }
    double getRadius() const 
    { 
        return radius; 
    }
    double getArea() const {
         return 3.1416 * radius * radius; 
        }//return the area of the circle 
    double getPerimeter() const {
        return 2 * 3.1416 * radius;
        }//returns the perimeter of the circle 
    bool contains(double x, double y) const {
        double distance = sqrt(pow(x - center.getX(), 2) + pow(y - center.getY(), 2));
        return distance <= radius;
    }
    bool contains(const Circle2D& circle) const {
        double distance = sqrt(pow(circle.getCenter().getX() - center.getX(), 2) + pow(circle.getCenter().getY() - center.getY(), 2));
        return distance + circle.getRadius() <= radius;
    }
    bool overlaps(const Circle2D& circle) const {
        double distance = sqrt(pow(circle.getCenter().getX() - center.getX(), 2) + pow(circle.getCenter().getY() - center.getY(), 2));
        return distance < radius + circle.getRadius();
    }
};//end of class circle 

int main() {
    //part 1 : instantiate an object circle c1
    Circle2D c1 = Circle2D(2, 2, 5.5);
    //part 2: return the area and perimeter
    cout << "Area of circle c1: " << c1.getArea() << endl;
    cout << "Perimeter of circle c1: " << c1.getPerimeter() << endl;
    //part 3 : check whether the new circle in inside the circle c1 or not or ovarlaps
    cout << c1.contains(3, 3) << endl;
    cout << c1.contains(Circle2D(4, 5, 10.5)) << endl;
    cout << c1.overlaps(Circle2D(3, 5, 2.3)) << endl;

    return 0;
}
