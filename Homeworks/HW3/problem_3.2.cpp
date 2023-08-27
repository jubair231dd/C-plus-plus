#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
/*
This program generates 100 random integers between 0 and 9 and
displays the count for each number.
*/
int main(){
    //part 1: created a dynamic array to store the count for each number between 0 to 9
    int *counts;
    counts = new int[10];
    srand(time(NULL));
    //part 2: generate  100 random number between 0 to 9
    for(int i = 0; i < 100; i++){
        int random_num = (int) (rand() % 10);
        //part 2.1 : Increase the count if the index position fo that number is cncountered
        counts[random_num]++;        
    }
    //part 3: Display the total number of counts for each number
    cout << "Total number of each integers between 0 to 9:" << endl;
    for (int i = 0; i < 10; i++) {
        cout <<"The total count for "<< i << " is: " << counts[i] << endl;
    }
    delete [] counts;
    return 0;
}