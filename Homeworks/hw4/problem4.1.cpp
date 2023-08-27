
#include<iostream>
using namespace std;
/*
This program takes in an integer and returns the reversed number
*/
//part 1: write the function to return the reversed input number 
int reversedNumber(int x){
    cout << "Reversed number : ";
    while(x >0 ){
        int remainder =  x%10;
        x = x/10;
        cout << remainder;
    }
    cout << endl;
    return x;
}

int main(){
    //part 2: prompt the user to input the int number
    cout << "Enter the number :";
    int number;
    cin >> number;
    //part 3: return the number 
    cout << reversedNumber(number);
    
    return 0;
}