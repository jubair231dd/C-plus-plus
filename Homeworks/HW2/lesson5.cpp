

#include<iostream>
using namespace std;
int main(){
    //part 1 : Initialize the variables
    int sum = 0; 
    int count = 0;
    int average;
    bool finished = false;
    //part 2: prompt the positive number sequence
    while(!finished){
        cout<< "Enter the integer: ";
        int num;
        cin >> num;
        if(num >= 0){
            count++;
            sum = sum + num;
            average = sum / count;
        }
        else{
            finished = true;
        }
    }
    cout << "Average: "<< average << endl;





    return 0;
}