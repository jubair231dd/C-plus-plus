#include<iostream>
using namespace std;

class Date {
private:
    int year, month, day;
public:
    Date() {
        cout << "Enter the year: ";
        cin >> year;
        cout << "Enter the month: ";
        cin >> month;
        cout << "Enter the day: ";
        cin >> day;
    }//default constructor

    void output() {
        cout << year << "/" << month << "/" << day << endl;
    }//output()

};

class student {
private:
    int score;
    string name;
    Date* pbirthday;
public:
    student() {
        cout << "Enter name :";
        cin >> name;
        cout << endl;

        cout << "Enter score :";
        cin >> score;
        cout << endl;

        pbirthday = new Date();
    }// default constructor

    ~student() {
        delete pbirthday;
    }// destructor for student

    void output() {
        cout << name << " " << score << " ";
        pbirthday->output();
    }
};

class course {
private:
    string title;
    int numStudents;
    student** list;
    const int MaxStudentNum = 25;

public:
    course() {
        cout << "Enter the title: ";
        cin >> title;
        numStudents = 0;
        list = new student * [MaxStudentNum];
    }

    ~course() {
        for (int i = 0; i < numStudents; i++)
            delete list[i];
        delete[] list;
    }

    void output() {
        cout << "Course Title:" << title << endl;
        for (int i = 0; i < numStudents; i++)
            list[i]->output();
    }

    void addStudent() {
        if (numStudents == MaxStudentNum) {
            cout << "Maximum number of students reached" << endl;
            return;
        }
        list[numStudents++] = new student();
    }

    void removeStudent() {
        if (numStudents == 0) {
            cout << "No students in the list" << endl;
            return;
        }
        delete list[--numStudents];
    }
};

int main() {

    // part1: instantiate a course
    course cpsc5010;

    // part 2: manage the course students' info following user's interface
    bool finished = false;
    while (!finished) {
        cout << "Select: (0) output; (1) add Student; (2) delete Student; (3) exit:" << endl;
        int option;
        cin >> option;
        switch (option) {
        case 0:
            cpsc5010.output();
            break;
        case 1:
            cpsc5010.addStudent();
            break;
        case 2:
            cpsc5010.removeStudent();
            break;
        default:
            finished = true;
        }
    }

    return 0;
}
