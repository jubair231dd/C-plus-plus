
#include<iostream>
using namespace std;
// void addition(int x, int y){
//     int sum = x+y;
//     cout << "Sum : " << sum << endl;
// }

void addition(int, int); //if function is decalered after the main functiuon
void subtraction(int,int);
int main(){

    addition(3, 4);
    subtraction(30, 4);









    return 0;
}

void addition(int x = 10, int y = 20){
    int sum = x+y;
    cout << "Sum : " << sum << endl;
}
void subtraction(int x, int y){
    int sum = x-y;
    cout << "subtraction : " << sum << endl;
}