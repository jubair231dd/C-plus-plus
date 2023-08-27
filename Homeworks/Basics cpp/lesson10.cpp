#include<iostream>
/*
Lesson: 10
pass parameter by value and pass by reference  
*/
using namespace std;

//define the prototype
void swap1(int x, int y);
void swap2(int &x, int &y); // indicates the memory address/ pointer / reference of x and y

int main(){

    //part 1: lets try to swap two values of biden and trump
    int biden = 7;
    int trump = 4;
    cout << "Before swap :"<< biden << " " << trump << endl;
    swap1(biden, trump); // passed by value
    swap2(biden, trump);  //passed by refenrence
    cout << "After swap :"<< biden << " " << trump << endl;


    return 0;
}

//passed parameters  by value
void swap1(int x, int y){
    int tmp = x;
    x = y;
    y = tmp;
}  //swap value of x and y 

//passed parameters by reference / memory address
void swap2(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}