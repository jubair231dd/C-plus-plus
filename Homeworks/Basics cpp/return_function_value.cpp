
#include<iostream>
using namespace std;

//if default value is set then must declare the function above the main function

int addition (int x =10, int y=10){
    int sum = x + y;
    return sum;
}

int square(int n = 7){
    return n*n;
}

int main(){

    cout << addition(23,10) << endl;
    cout<< square();


    return 0;
}
