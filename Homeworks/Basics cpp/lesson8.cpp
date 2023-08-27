
#include <iostream>
#include <iomanip>
#include<stdlib.h>
using namespace std;
/*
lesson 08: Binary search and 2D array
*/
int main(){
    //part 1: create a dynamic 2d array
    //define rowNumber =3 colNumber =3
    const int rowNum = 13;
    const int colNum = 10;
    char **table = new char *[rowNum];
    //make the rows and coloumns
    for(int i =0; i < rowNum; i++) table[i] = new char [colNum];

    //initialize the array
    int asciiCode = 0;
    for(int i=0; i<rowNum ; i++){
        for(int j=0; j<colNum; j++){
            table[i][j] = (char)(asciiCode++);  //(char) castr into char
    }
    }

    // 1.3 output the 2d array 
    for(int i = 0; i < rowNum; i++){
        for(int j = 0; j<colNum; j++){
            cout << setw(4) << table[i][j];
        }
        cout << endl;
    }


    //1.4 release the array
    for(int i=0; i< rowNum; i++){
        delete[] table[i];
    }
    delete [] table;

    //part 2: Binary search algorhythmn
    int marks[10] = {12,14,16,17,19,22,25,27,45,67};
    int target = 20;
    
    bool found = false;
    int start = 0, end = 9; // these are index of the first and last enelemnt of the array
    while(start <=end && !found){
        int mid = (start+end)/2;
        if(marks[mid] == target){
            found = true;
            cout << "Found" << endl;
        }
        else{
            if(marks[mid] > target){ // target on left
                end = mid - 1;
            }
            else{ //target on right
                start = mid+1;
            }
        }
    }
    cout << "Search result" << found << endl;
    return 0;
}