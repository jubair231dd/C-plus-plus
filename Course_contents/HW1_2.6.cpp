
#include<iostream>

using namespace std;

int main(){
    //This program takes an input from the user between 0 and 1000 and returns the sum of the digits
    //part 1: prompt user to enter the integer
    cout<< "Enter an integer between 0 and 1000: ";
    int digit;
    cin>> digit;

    //part 2: declare some variables
    int sum = 0;
    int reminder;

    //part 3: calculate the sum of the digits
    while(digit > 0 and digit < 1000){
        reminder = digit % 10;
        sum = sum + reminder;
        digit = digit / 10;
    }

    //part 4: returns the output
    cout<< "The sum of all digits are :" << sum << endl;

    return 0;











    // return 0;
}