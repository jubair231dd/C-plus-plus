
#include<iostream>
using namespace std;
/*
function overloading means the functions will have the same name 
but the parameters of the functions will be different
*/
int addition (int x , int y){
    int sum = x + y;
    return sum;
}
int addition (int x, int y, int z){
    int sum = x + y + z;
    return sum;
}
int main(){

    cout << addition(10, 20) << endl;   
    cout << addition(10,20,30) << endl;


    return 0;
}