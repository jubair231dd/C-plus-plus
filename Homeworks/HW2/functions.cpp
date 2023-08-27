

#include<iostream>
using namespace std;


int add( int, int);  // if function is below the main functiuon then this pototype is added 

int subtract( int a = 10, int b = 5){ // these are the defalut values of the function
    int result = a - b;
    return result;
}
int multiply( int, int);

int main(){
    cout<< "The sum of the two numbers are: "<< add(2, 5) << endl;
    cout<< "The sum of the two numbers are: "<< subtract() << endl;
    cout<< "The sum of the two numbers are: "<< multiply(2, 5) << endl;
    return 0;
}

int add( int a, int b){
    int sum = a+ b;
    return sum;
}


int multiply( int a, int b){
    int result = a * b;
    return result;
}