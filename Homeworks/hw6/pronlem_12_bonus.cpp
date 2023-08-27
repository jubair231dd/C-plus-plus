#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//part 1 : define prototype of the function
void drawLowRightTriMulTable(int n) ;
int main() {
    cout<< "Prompt the user to input the size of the table :";
    int n;
    cin >> n;
    drawLowRightTriMulTable(n);
    return 0;
}
//part 2: implement the function
void drawLowRightTriMulTable(int n) {
  for (int row = 1; row <= n; row++) {
    // part 1.1 : print the blank spaces
    for (int col = 1; col <= n-row; col++) {
      cout << "  ";
    }
    // part 1.2: print the multiplication table
    for (int col = 1; col <= row; col++) {
      cout << row*col <<" ";
    }
    cout << endl;
  }
}
