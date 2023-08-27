#include<iostream>
using namespace std;
/*
This program prompts the user to enter the number of students, the students’ names, and their scores, and prints student names in decreasing order of their scores.
*/
//part 1: Define the data type
struct student
{
    string name;
    double score;
};
int main(){
    //part 2: prompt the user to enter the number of the students , students name and their scores
    cout<< "Enter the number of the students: ";
    int n;
    cin >> n;
    //part 2.1: create an array to store the students names and scores
    struct student students[n];
    for(int i = 0; i < n; i++){
        cout << "Student no. " << i+1 << " enter your name : ";
        cin >> students[i].name;
        cout << "Student no. " << i+1 << " enter your score : ";
        cin >> students[i].score;
    }
    //part 3: print students names in decreasing order of their scores
    //part 3.1: iterating through each element of the array
    for(int i = 0; i < n ; i++){
        //part 3.2: looping to compare elements
        for(int j = 0; j < i; j++){
            //part 3.2:  swapping the elemets if the second element is larger
            if(students[j].score < students[j+1].score){
                student temporary = students[j];
                students[j] = students[j+1];
                students[j+1] = temporary;
            }  
        } 
    }
    //part 4: Print the students name in the decreaing order
    cout<< "Students names in the decreasing order of their scores: " << endl;
    for(int i = 0; i < n ; i++){
        cout << "Name: " << students[i].name << "  Score: " << students[i].score << endl;
    }
    return 0;
}