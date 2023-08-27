#include <iostream>
#include <cmath>
using namespace std;
//create the class named quadratic equation
class QuadraticEquation {
private:
    double a;
    double b;
    double c;
public:
    QuadraticEquation(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    } //regular constructor having three parameters

    double getA() {
        return a;
    } // accessor: returns the value of a

    double getB() {
        return b;
    }// accessor: returns the value of b

    double getC() {
        return c;
    }// accessor: returns the value of c

    double getDiscriminant() {
        return b * b - 4 * a * c;
    } // accessor: returns the value of the discriminant

    double getRoot1() {
        if (getDiscriminant() < 0) {
            return 0;
        }
        else {
            return (-b + sqrt(getDiscriminant())) / (2 * a);
        }
    } // accessor: returns the value of the root 1 if not less than zero

    double getRoot2() {
        if (getDiscriminant() < 0) {
            return 0;
        }
        else {
            return (-b - sqrt(getDiscriminant())) / (2 * a);
        }// accessor: returns the value of the root 2 if not less than zero
    }
}; //end of the class 

int main() {
    //part 1 : prompt the user to enter the value of a , b , c
    double a, b, c;

    cout << "Enter the values of a, b, and c: ";
    cin >> a >> b >> c;

    //part 2 : create an instance of the class
    QuadraticEquation eq(a, b, c);

    double discriminant = eq.getDiscriminant();

    if (discriminant > 0) {
        double root_1 = eq.getRoot1();
        double root_2 = eq.getRoot2();
        cout << "The equation has two roots: " << root_1 << " and " << root_2 << endl;
    }
    else if (discriminant == 0) {
        double root = eq.getRoot1();
        cout << "The equation has one root: " << root << endl;
    }
    else {
        cout << "The equation has no roots." << endl;
    }

    return 0;
}
