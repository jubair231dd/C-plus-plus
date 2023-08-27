
#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main(){
    //part 1: Declare and create a dynamic array of type int 
    int *list = new int [7];
    //part 2: initialize the array using random number / take input in the array
    for(int i = 0; i < 7; i++){
        list[i] = (int) (rand() % 100);
    }
    //part 3: output the array 
    for(int i = 0; i < 7; i++){
        cout << list[i] << " ";
    }z
    cout << endl;
    //part 4: sort the array in the increasing order
    for(int i =0; i <7 ; i++){ //iterating through all the elements of the array
        for(int j = 0; j<i; j++){ //comparing each element
            if(list[j] > list[j+1]){ //swapping 
                int tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;

            } 
        }
    }
    cout<< "After sorting" << endl;
    for(int i = 0; i < 7; i++){
        cout << list[i]<< " ";
    }
    //part 5: reverse the array
    for(int i = 0; i < 7/2; i++){
        int tmp = list[i];
        list[i] = list[7-i-1];  //7 should be the length of the array
        list[7-i-1] = tmp;
    } 
    cout<< "After reversing " << endl;
    for(int i = 0; i < 7; i++){
        cout << list[i]<< " ";
    }
    //part 6: search the array
    bool found = false;
    int element;
    cout << " Which element are you are looking for :";
    cin >> element;
    for(int i = 0; i < 7; i++){
        if(list[i] == element){
            found = true;
        }
    }
    cout << "Search result : "<< found << endl;
    //part 7: release the array
    delete [] list;  // without it memory leaking








    return 0;
}