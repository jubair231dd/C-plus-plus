#include <iostream>
using namespace std;

int main() {
    const int SIZE = 100;
    int num, evenCount = 0, total = 0, count = 0, sum = 0;
    int *arr = new int[SIZE];

    // Prompt user to enter positive integers
    cout << "Enter positive integers (enter 0 or negative to exit):" << endl;

    // Read integers and count even numbers
    while (cin >> num && num > 0) {
        if (num % 2 == 0) {
            evenCount++;
        }
        if (num >= 100 && num <= 200) {
            // Save number in dynamic array
            if (count < SIZE) {
                arr[count++] = num;
            } else {
                cout << "Warning: dynamic array is full, cannot save more numbers." << endl;
            }
        }
    }

    // Compute percentage of even numbers
    if (count > 0) {
        double evenPercentage = (double) evenCount / count * 100;
        cout << "Total even numbers: " << evenCount << endl;
        cout << "Percentage of even numbers: " << evenPercentage << "%" << endl;
    } else {
        cout << "No even numbers found." << endl;
    }

    // Compute average of numbers between 50 and 150
    for (int i = 0; i < count; i++) {
        int num = arr[i];
        if (num >= 50 && num <= 150) {
            sum += num;
            total++;
        }
    }
    if (total > 0) {
        double average = (double) sum / total;
        cout << "Average of numbers between 50 and 150: " << average << endl;
    } else {
        cout << "No numbers found between 50 and 150." << endl;
    }

    // Release dynamic array memory
    delete [] arr;

    return 0;
}
