#include<iostream>
using namespace std;
int main(){

    int sum = 0;
    int count = 0; 
    bool finished = false;

    while(!finished){
    cout << "Enter the positive numbers :";
    int n;
    cin >> n;
    if(n>0){
        sum = sum+n;
        count++;
    }
    else{
        finished = true;
    }
    }  
    int average = sum / count;
    cout<< "Average: " << average << endl;




    return 0; 
}

