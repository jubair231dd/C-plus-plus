

#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    /*
    array is a collection of varibales of same data type  
    */
    // data_type array_name [array_size]

    // part 1: output a whole multiplication table
    for (int irow = 1; irow <= 9; irow++) {
        for (int jcol = 1; jcol <= 9; jcol++) cout << setw(3) << irow*jcol;
        cout << endl; // go to the new line
    } // outer loop: controled by irow

    // part 2: output a lower left triangular mul-table
    for (int irow = 1; irow <= 9; irow++) {
        for (int jcol = 1; jcol <= irow; jcol++) cout << setw(3) << irow*jcol;
        cout << endl; // go to the new line
    } // outer loop: controled by irow









    return 0;
}