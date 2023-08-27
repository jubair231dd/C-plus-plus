#include<iostream>
using namespace std;
/*
This program prompt the users to enter ten numbers and return only the distinct numbers
*/
//part 1: function to return distinct numbers from an array
bool returnDistinctNumber(int *array, int size, int num);
int main(){
    //part 2: Declaring a dynamic array to hold the distinct number 
    int *numbers;
    numbers = new int[10];
    int num;
    int count = 0;

    //part 3: Prompt the user to enter ten distinct numbers 
    for(int i = 1; i <= 10; i++){
        cout << "Enter the " << i << " th number: ";
        cin >> num;

        //part 3.1: if the number is distinct the it's stored in the array
        if(returnDistinctNumber(numbers, count, num)){
            numbers[count] = num;
            count++;
        }
    }
    //part 4: print the total distinct number and the distinct numbers
    cout << "The total number of distinct numbers are: " << count << endl;
    cout << "The distinct numbers are: ";
    for(int i = 0; i < count; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
    delete [] numbers;
    return 0;
}
bool returnDistinctNumber(int *array, int size, int num){
    //part 1.1 : Iterating through all the elements in the array to check if the user input is in the arrary or not
    for(int i = 0; i < size; i++){
        if(num == array[i]){
            return false;
        }
    }
    return true;
}