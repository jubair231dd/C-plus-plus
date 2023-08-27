#include <iostream>
#include <cmath>

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
    }

    double getA() {
        return a;
    }

    double getB() {
        return b;
    }

    double getC() {
        return c;
    }

    double getDiscriminant() {
        return b * b - 4 * a * c;
    }

    double getRoot1() {
        if (getDiscriminant() < 0) {
            return 0;
        }
        else {
            return (-b + std::sqrt(getDiscriminant())) / (2 * a);
        }
    }

    double getRoot2() {
        if (getDiscriminant() < 0) {
            return 0;
        }
        else {
            return (-b - std::sqrt(getDiscriminant())) / (2 * a);
        }
    }
};

int main() {
    double a, b, c;

    std::cout << "Enter the values of a, b, and c: ";
    std::cin >> a >> b >> c;

    QuadraticEquation eq(a, b, c);

    double discriminant = eq.getDiscriminant();

    if (discriminant > 0) {
        double root1 = eq.getRoot1();
        double root2 = eq.getRoot2();
        std::cout << "The equation has two roots: " << root1 << " and " << root2 << std::endl;
    }
    else if (discriminant == 0) {
        double root = eq.getRoot1();
        std::cout << "The equation has one root: " << root << std::endl;
    }
    else {
        std::cout << "The equation has no roots." << std::endl;
    }

    return 0;
}
