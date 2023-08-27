

#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    /*
    student application: The program takes the input of a students numbers and outputs the sum, max and 
    average  
    */

   //part 1: prompt user to enter the number of students
    cout << "Enter the number of stduents: ";
    int n;
    cin >> n;
    int sum = 0;

    int student[n];
    for(int i = 0; i <n; i++){
        cout<< "Enter the " << i << " th student mark :";
        cin >> student[i];
        //sum of all the input numbers 
        sum = sum + student[i];
        }
    //part 2: find the average marks
    double average = (double)sum / n; 

    //part 3: find the maximum mark and the minimum marks 
    int max = student[0];
    int min = student[0];
    for( int j = 1; j < n; j++){
        if(max > student[j]) max = max;
        else max = student[j];

        if(min > student[j]) min = student[j];
        else min = min;
    }
    cout << " Total marks is : " << sum << endl << " The average marks is : "<< average << endl;
    cout << "Maximum number is :" << max << endl << "Min number is : " << min << endl;


    return 0;
}