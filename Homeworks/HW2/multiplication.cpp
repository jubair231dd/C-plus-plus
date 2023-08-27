
#include<iostream>
using namespace std;

int main(){
    //Multiplication table
    int num;
    cout<< "Enter the number: ";
    cin>> num;

    for(int i = 1; i <= 10; i++){

        cout<< i << " * " << num << " = " << i*num << endl;

    }


    return 0;
}