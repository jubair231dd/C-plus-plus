
#include<iostream>
using namespace std;
/*
This program takes an input of an integer between 0 to 1000 from an user and returns the sum of the digits of that integer 
*/

int main(){

    //part 1 : take the inpute from the user
    cout<< "Enter an integer between 0 and 1000: ";
    int digit;
    cin>> digit;
    //part 2 : declaring some variables
    int sum = 0;
    int remainder;

    //part 3 : calculate the sum of the digits
    while(digit > 0 && digit < 1000){  // as long as the input is in between 0 and 1000 the loop executes
        remainder = digit % 10;
        sum = sum + remainder;
        digit = digit / 10;
    }
    //part 4 : return the results
    cout<< "The sum of all digits of the number is: " << sum << endl;

    return 0;
}