
#include<iostream>
#include<string>
using namespace std;
/*
This program compututes the gratuity and total from the given subtotal and gratuity rate 
*/

int main(){
    //part 1: prompt user to input the subtotal and gratuity rate 
    cout<< "Enter the subtotal amount: ";
    double subTotal;
    cin>> subTotal;

    cout<< "Enter the gratuity_rate (%): ";
    double gratuity_rate;
    cin>> gratuity_rate;

    //part 2: calculate the gratuity and the total 
    double gratuity;
    gratuity = subTotal * gratuity_rate/100;

    double total;
    total = gratuity + subTotal;

    //part 3: return the output
    cout<< "Gratuity : $"<< gratuity << endl;
    cout<< "Total : $"<< total << endl;
    

    return 0;





}