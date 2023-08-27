
#include<iostream>
#include<string>

using namespace std;

int main(){
    //This program computes gratuity and total from subtotal and gratuity rate
    //part 1: prompt user to enter the subtotal
    cout<< "Enter the subtotal amount: ";
    double subTotal;
    cin>> subTotal;

    //part 2: prompt user to enter the gratuity_rate
    cout<< "Enter the gratuity_rate (%) : ";
    double gratuity_rate;
    cin>> gratuity_rate;

    //part 3: calculate gratuity and total
    double gratuity;
    gratuity = subTotal * gratuity_rate/100;

    double total;
    total = subTotal + gratuity;

    //part 4: display the output
    cout<< "Gratuity : $"<< gratuity << endl;
    cout<< "Total : $"<< total << endl;

    return 0;

}