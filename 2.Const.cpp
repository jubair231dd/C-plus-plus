

#include <iostream>

int main(){
    // const keyword tells the variable value is a constant 
    // it also tells the compiler to stop modifying it
    // read only

    const double PI = 3.1416;
    double radius = 5.00;
    
    double circumference = 2 * PI * radius; 
    std::cout << "Circumference: " << circumference << '\n';





    return 0;
}