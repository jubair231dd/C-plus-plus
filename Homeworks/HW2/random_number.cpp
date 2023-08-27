

#include<iostream>
#include<stdlib.h>
using namespace std;
#include<time.h>

int main(){

    int *counts;
    counts = new int[10];

    // generate  10 random number between 0 to 9
    // srand(time(2));
    for(int i = 0; i < 100; i++){

        int random_num = rand() % 10;
        // take the input in the array
        counts[random_num]++;        
        cout<< "Random number " << i << " : " << random_num << endl;

    }

    // Display the total number of counts for each number
    cout << "Total number of each integers between 0 to 9:" << endl;
    for (int i = 0; i < 10; i++) {
        cout <<"The total count for "<< i << " is: " << counts[i] << endl;
    }

    delete [] counts;







    return 0;
}