#include<iostream>
/*
Lesson: 9
Intro to functions
*/
using namespace std;

//part 1: Define the function prototype

//Overloading : different functions share the same name due to the ease of usage
int max(int x, int y, int z);
double max(double x, double y);
int max(int *list, int length);

int main(){

    //step 1: calculate and update the largest value of 3, 8, -19
    cout << max(3,8,-19) << endl;

    //step 2: calculate and output the largest value of 4.5, 9.9
    cout << max(4.5, 9.9) << endl;

    //step 3: calculate and output the largest value out of an array
    int array[7] = {9,2,0,12,4,5,8};
    cout << max(array, 7)<< endl;

    //step 4: reuse the function max(int, int, int)
    cout << max(-100,100,200)<< endl;

    return 0;
}

// part 2: implement the functions
int max(int x, int y, int z){  //galiator strategy
    int result = x;
    if(result < y){
        result = y;
    }
    if(result < z){
        result = z;
    }
    return result;
}

double max(double x, double y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int max(int *list, int length){
    int winnerID = 0;
    for(int i = 0; i < length; i++){
        if (list[winnerID] < list[i]){
            winnerID = i;
            return list[winnerID];
        }
    }
}