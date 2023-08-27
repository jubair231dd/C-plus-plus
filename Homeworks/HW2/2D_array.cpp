

#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    //part 1: take the input of the dimension of the array from the user
    int i;
    int j;
    cout << " Enter the row: ";
    cin >> i;
    cout << "Enter the column number : ";
    cin >> j;

    //part 2: prompt the user to input the elements of the array
    int student[i][j];
    for(int row = 0; row < i; row++)
    {
        for(int col = 0; col < j; col++)
        {
            cout<< "student " << "["<<row<<"]" <<"["<<col<<"] " << "=";
            cin>> student[row][col];
        }
    }      
    // part 3: show the output 
    cout << " The array is :" << endl;
    for(int row = 0; row < i; row++)
    {
        for(int col = 0; col < j; col++)
        {
            cout << student[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}