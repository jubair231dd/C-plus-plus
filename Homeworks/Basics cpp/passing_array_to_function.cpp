
#include<iostream>
using namespace std;
/*
passing array to a function
*/
void displayArray(int num [], int arraySize){
    for(int i = 0; i < arraySize; i++){
        cout << num[i] << " ";
    }
}

int main(){

    int marks[5] = {10, 20, 30, 40, 50};
    displayArray(marks, 5);




    return 0;
}