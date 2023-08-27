#include<iostream>

using namespace std;
//Part 1: Define the prototype of the function
void reverseDisplay(int number);

int main(){
    cout << "Enter the number to be reversed : ";
    int number;
    cin >> number;
    cout << "Reversed number : ";
    reverseDisplay(number);
    return 0;
}
//Part 2: implement the function
void reverseDisplay(int number){
    if (number < 10){
        cout << number;
    }
    else{
        cout << number % 10;
        reverseDisplay(number / 10); // calling the function recursively
    }
}