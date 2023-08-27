#include<iostream>
using namespace std;

int max( int *array, int length);
void displayArray(int *array, int length);

int main(){

    int marks[5] = {1,2,3,4,5};
    cout<< max(marks, 5) << endl;
    displayArray(marks, 5);



    return 0;
}
void displayArray(int *array, int length){
    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
}
int max(int *array, int length) {
    int maxID = 0;
    for (int i = 1; i < length; i++) {
        if (array[maxID] < array[i]) {
            maxID = i;
        }
    }
    return array[maxID];
}
