#include<iostream>

using namespace std;

//Part 1: Define the prototype of the function
string dec2Hex(int value, string result = "");

int main(){
    cout << "Enter the number to be turned to HEX : ";
    int value;
    cin >> value;
    cout << "Hex number : ";
    cout << dec2Hex(value) << endl;
    return 0;
}

//Part 2: implement the function
string dec2Hex(int value, string result){
    int r = value % 16;
    string remainder;
    if (r >= 10) {
        remainder = string(1, 'A' + r%10);
    }   else {
        remainder = to_string(r);
    }
    if(value / 16 == 0){
        return remainder + result;
    }
    else{
        return dec2Hex(value / 16, remainder + result);
    }
}
