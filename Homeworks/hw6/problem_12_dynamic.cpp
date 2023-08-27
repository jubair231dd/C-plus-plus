#include <iostream>
using namespace std;

int main() {
    //part 1: declare variabls and constants
    const int sizeArray = 100;
    int num, evenCount = 0, count = 0, evenIndex = 0, sum = 0, total = 0;
    int* array = new int[sizeArray];

    cout << "Enter positive integers:" << endl;
    //part 2: take input while the number is greater than zero
    while (cin >> num && num > 0) {
        count++;
        if (num % 2 == 0) {
            evenCount++;
            if (num >= 100 && num <= 200) {
                if (evenIndex < sizeArray) {
                    array[evenIndex++] = num;
                }
                else {
                    cout << "Out of bounds for array size" << endl;
                }
            }
        }
        else if (num >= 100 && num <= 200) {
            if (count < sizeArray) {
                array[count++] = num;
            }
            else {
                cout << "Out of bounds for array size" << endl;
            }
        }
    }
    //part 3: print the total even number count and percentage
    if (count > 0) {
        double percentageEven = (double)evenCount * 100 / count;
        cout << "Total even count: " << evenCount << endl;
        cout << "Total even percentage: " << percentageEven << "%" << endl;
    }

    for (int i = 0; i < evenIndex; i++) {
        int num = array[i];
        if (num >= 50 && num <= 150) {
            sum += num;
            total++;
        }
    }
    //part 4: print the average between 50 and 150
    if (total > 0) {
        double average = (double)sum / total;
        cout << "Average between 50 and 150: " << average << endl;
    }
    else {
        cout << "No numbers between 50 and 150" << endl;
    }

    delete[] array;

    return 0;
}
