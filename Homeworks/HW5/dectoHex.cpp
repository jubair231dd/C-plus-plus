#include<iostream>

using namespace std;

//Part 1: Define the prototype of the function
void dec2Hex(int n);

int main(){
    cout << "Enter the number to be turned to HEX : ";
    int value;
    cin >> value;
    cout << "Hex number : ";
    dec2Hex(value);
    cout << endl;
    return 0;
}

//Part 2: implement the function
void dec2Hex(int n){
    int r;
    if(n>0){
        r = n % 16;
        dec2Hex(n/16);
    switch (r)
    {
    case 10 : cout << "A";
        break;
    case 11 : cout << "B";
        break;
    case 12 : cout << "C";
        break;
    case 13 : cout << "D";
        break;
    case 14 : cout << "E";
        break;
    case 15 : cout << "F";
        break;
    
    default: cout << r;
        break;
    }
    }
}
