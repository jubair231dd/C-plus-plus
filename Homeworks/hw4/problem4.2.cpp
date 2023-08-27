#include<iostream>
using namespace std;
/*
This program finds all twin primes less than 1,000
*/
//part 1: Create a function to find the prime number 
bool primeNumber(int n){
    if(n < 2){
        return false;
    }
    else{
        for(int i = 2; i <= n/2; i++){// n/2 is selected as the higher limit becasue we have to check for primes upto square root of n
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    //part 2: check and the twin pairs and print them
    for(int i = 2; i < 1000; i++){
        if(primeNumber(i) && primeNumber(i+2)){
            cout << "(" << i << "," << i+2 <<")" << endl;
        }
    }
    return 0;
}