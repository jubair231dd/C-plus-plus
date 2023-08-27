
#include<iostream>
using namespace std;
/*
recursive function is a function that calls itself
base case is used to slop the function call otherwise the function would be infinite
*/
int factorial(int n){
    if (n == 0){
        return 1;
    }
    else{ 
    return n * factorial(n-1);
    }
}

int main(){
    cout << factorial(5) << endl;
    return 0;
}