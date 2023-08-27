#include <iostream>
using namespace std;

//create the location class
class Location {
public:
int row;
int column;
double maxValue;

//created a default constructor of the location class
Location() {
    row = 0;
    column = 0;
    maxValue = 0.0;
}
//function to return the loacation of the largest element of the array...this function belongs to the class Location
static Location locateLargest(double** a, int rows, int cols) {
    Location location;
    location.maxValue = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > location.maxValue) {
                location.maxValue = a[i][j];
                location.row = i;
                location.column = j;
            }
        }
    }
    return location;
}
};

int main() {
    //part 1 : prompt the users to enter the rows and the columns
    int rows, cols;
    cout << "Enter the number of rows and columns in the array: ";
    cin >> rows >> cols;
    //part 2 : create a two dimensional array
    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }
    //part 3: enter elements in the array
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }
//part 4: call the method to return the loacation of the max element of the array
Location location = Location::locateLargest(array, rows, cols);

cout << "The location of the largest element is "
     << location.maxValue << " at (" << location.row << ", " << location.column << ")" << endl;

for (int i = 0; i < rows; i++) {
    delete[] array[i];
}
delete[] array;

return 0;
}