#include <iostream>
using namespace std;
//part 1: implement the student abstract class 
class Student {
protected:
    string name;
    int studentNo;
public:
    virtual void display() = 0; // pure virtual function
};
//part 2: implement the engineering derived class
class Engineering : public Student {
private:
    string branch;
public:
    Engineering(string name, int studentNo, string branch) {
        this->name = name;
        this->studentNo = studentNo;
        this->branch = branch;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "studentNo: " << studentNo << endl;
        cout << "Branch: " << branch << endl;
    }
};
//part 3: implement the medicine derived class
class Medicine : public Student {
private:
    string specialization;
public:
    Medicine(string name, int studentNo, string specialization) {
        this->name = name;
        this->studentNo = studentNo;
        this->specialization = specialization;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "studentNo: " << studentNo << endl;
        cout << "Specialization: " << specialization << endl;
    }
};
//part 4: implement the science derived class
class Science : public Student {
private:
    string major;
public:
    Science(string name, int studentNo, string major) {
        this->name = name;
        this->studentNo = studentNo;
        this->major = major;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "studentNo: " << studentNo << endl;
        cout << "Major: " << major << endl;
    }
};
int main() {
    //part 4: initialize an array of pointer of student class
    Student* students[3];
    //part 5: create three object and take input to the array
    students[0] = new Engineering("John", 1, "Computer Science");
    students[1] = new Medicine("Emily", 2, "Neurology");
    students[2] = new Science("Alex", 3, "Chemistry");
    //part 6: the pure virtual function display called on each object
    for(int i = 0; i < 3; i++) {
        students[i]->display();
        cout << endl;
    }

    return 0;
}
