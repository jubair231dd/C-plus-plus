#include <iostream>
using namespace std;

int main() {
    int year, count = 0;
    cout << "All the leap years from 2001 to 2100 are: " << endl;
    for (year = 2001; year <= 2100; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            cout << year << " ";
            count++;
            if (count == 10) {
                cout << endl;
                count = 0;
            }
        }
    }
    return 0;
}
