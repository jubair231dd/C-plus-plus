#include<iostream>
#include<cmath>
using namespace std;
/*
This program takes in the input of the parameters(a,b,c) of a quadratic equation and returns the root of the equation
*/
int main(){
    //part 1 : prompt user to input a , b , c
    cout<< "Enter the value of a : ";
    double a;
    cin>> a;

    cout<< "Enter the value of b : ";
    double b;
    cin>> b;

    cout<< "Enter the value of c : ";
    double c;
    cin>> c;

    //part 2 : calculate the discriminant
    double discriminant = pow(b, 2) - 4*a*c;

    //part 3 : calculate the roots
    if(discriminant > 0){     //if the discriminant is positive then it returns two roots of the equation
        double root_1 = (-b + pow(discriminant, 0.5))/(2*a);
        double root_2 = (-b - pow(discriminant, 0.5))/(2*a);
        cout<< "Root_1: "<< root_1 << "\n" << "Root_2: " << root_2 << "\n";
    }
    else if(discriminant == 0){ // if the discriminant is zero then it returns only one root
        double root_1 = (-b + pow(discriminant, 0.5))/(2*a);
        cout<< "Root_1: "<< root_1 << "\n";
    }
    else{      //if otherwise then the below statement if returned
        cout<< "The equation has no real roots." <<endl;
    }
    return 0;

}