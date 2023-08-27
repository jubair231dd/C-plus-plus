#include <iostream>
using namespace std;
//part 1: define the prototype of the function 
int arraySum(int arr[], int index);

int main() {
    //part 3: declare the array and find the sum of the elements using recursion
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int sum = arraySum(arr, n-1);
    int givenValue = 12;

    if(sum == givenValue){
        cout<<"True"<<endl;
    };
    else{
        cout<<"False"<<endl;
    }
    
    return 0;
}
//part 2: implement the function
int arraySum(int arr[], int index) {
    // Base case: if the index is less than 0, return 0
    if (index < 0) {
        return 0;
    }
    
    // Recursive case: add the current element to the sum of the remaining elements
    return arr[index] + arraySum(arr, index-1);
}