
#include<iostream>
#include<cmath>

using namespace std;

int main(){

    //part 1: prompt user to enter values of a, b, c
    cout<< "Enter the value of a :";
    double a;
    cin>> a;

    cout<< "Enter the value of b :";
    double b;
    cin>> b;

    cout<< "Enter the value of c :";
    double c;
    cin>> c;

    //part 2: calculate the discriminant
    double discriminant = pow(b, 2) - 4*a*c;

    //part 3: calculate the roots
    if(discriminant > 0){
        double root_1 = (-b + pow(discriminant, 0.5))/(2*a);
        double root_2 = (-b - pow(discriminant, 0.5))/(2*a);
        cout<< "Root_1: "<< root_1 << "\n" << "Root_2: " << root_2 << endl;
    }
    else if(discriminant == 0){
        double root_1 = (-b + pow(discriminant, 0.5))/(2*a);
         cout<< "Root_1: "<< root_1 <<endl;
    }
    else{
        cout<<"The equation has no real roots."<< endl;
    }

    //part 4: return the outputs
    return 0;
}