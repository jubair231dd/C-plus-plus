#include<iostream>
#include<stdlib.h>
using namespace std;
/*
This program displays employees and their total hours in decreasing order of the total hours.
*/
// Part 1: Define the data type for an employee
struct Employee
{
    int id;
    int total_hours;
};
int main()
{
    // part 2: Create a 2D array to store the weekly hours for each employee
    srand(time(NULL));
    cout << "Enter the number of the employees :";
    int n;
    cin >> n;
    int **weekly_hours = new int*[n];
    for (int i = 0; i < n; i++) {
        weekly_hours[i] = new int[7];
            for(int j =0; j <7; j++){
                weekly_hours[i][j] = (rand() % 9) + 1;
            };
        }
    // Part 3: Calculate the total hours for each employee
    Employee employees[n];
    for (int i = 0; i < n; i++) {
        employees[i].id = i + 1;
        employees[i].total_hours = 0;
        for (int j = 0; j < 7; j++) {
            employees[i].total_hours += weekly_hours[i][j];
        }
    }
    //Part 4: Sort the employees in decreasing order of their hours
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 7 ; j++) {
            if (employees[j].total_hours < employees[j + 1].total_hours) {
                Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
    //Part 5: Display the output and release the dynamic array
    cout << "Employee id\tTotal hours" << endl;
    for (int i = 0; i < n; i++) {
        cout << employees[i].id << "\t\t" << employees[i].total_hours << endl;
    }
    for(int i=0; i<n; i++){
        delete [] weekly_hours[i];
    }
    delete [] weekly_hours;
    return 0;  
}