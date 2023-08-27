#include <iostream>
using namespace std;
//create a class point 
class Point {
public:
    double x, y;
};

//create a class named lineSegment and use the class point to create lineSewgment instances 
class LineSegment {
public:
    Point p1, p2;
};

//create a Class named LinearEquation to create the equations for the linesegments
class LinearEquation {
public:
    double a, b, c, d, e, f;

    LinearEquation(double a = 0, double b = 0, double c = 0,
                    double d = 0, double e = 0, double f = 0) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->e = e;
        this->f = f;
    }

    bool isSolvable() {
        return a*d - b*c != 0;
    } //accessor : returns if the equations are solvable or not

    double getX() {
        return (e*d - b*f) / (a*d - b*c);
    } //accessor : returns the x value

    double getY() {
        return (a*f - e*c) / (a*d - b*c);
    } //accessor : returns the y value
};

int main() {
    // Prompt the user to enter four endpoints
    cout << "Enter the endpoints of the first line segment: ";
    LineSegment line_segment_s1;
    cin >> line_segment_s1.p1.x >> line_segment_s1.p1.y >> line_segment_s1.p2.x >> line_segment_s1.p2.y;

    cout << "Enter the endpoints of the second line segment: ";
    LineSegment line_segment_s2;
    cin >> line_segment_s2.p1.x >> line_segment_s2.p1.y >> line_segment_s2.p2.x >> line_segment_s2.p2.y;

    // Get a, b, c, d, e and f
    double a = line_segment_s1.p1.y - line_segment_s1.p2.y;
    double b = line_segment_s1.p2.x - line_segment_s1.p1.x;
    double c = line_segment_s2.p1.y - line_segment_s2.p2.y;
    double d = line_segment_s2.p2.x - line_segment_s2.p1.x;
    double e = (line_segment_s1.p1.y - line_segment_s1.p2.y) * line_segment_s1.p1.x - (line_segment_s1.p1.x - line_segment_s1.p2.x) * line_segment_s1.p1.y;
    double f = (line_segment_s2.p1.y - line_segment_s2.p2.y) * line_segment_s2.p1.x - (line_segment_s2.p1.x - line_segment_s2.p2.x) * line_segment_s2.p1.y;

    // Create and instance of the LinearEquation
    LinearEquation intersectingPoint(a, b, c, d, e, f);

    // display the results
    if (intersectingPoint.isSolvable()) {
        cout << "The intersecting point is: (" << intersectingPoint.getX() << ", " << intersectingPoint.getY() << ")" << endl;
    }
    else {
        cout << "The two line segments do not intersect." << endl;
    }

    return 0;
}
