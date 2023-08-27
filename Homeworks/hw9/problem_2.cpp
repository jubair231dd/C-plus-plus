#include <iostream>
using namespace std;

//part 1: implement the template class
template <class T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T num1, T num2) {
        this->num1 = num1;
        this->num2 = num2;
    }//regular constructor
    void display() {
        cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
        cout << "Addition is: " << add() << endl;
        cout << "Subtraction is: " << subtract() << endl;
        cout << "Product is: " << multiply() << endl;
        cout << "Division is: " << divide() << endl;
    }
    //part 2: create the methods
    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};

int main() {
    //part 3: create an integer calculator object
    Calculator<int> intCalc(2, 1);
    intCalc.display();
    //part 3: create an float calculator object 
    Calculator<float> floatCalc(2.4, 1.2);
    floatCalc.display();

    return 0;
}
