#include <iostream>
#include <string>
using namespace std;
class MyDate {
private:
    int year;
    int month;
    int day;
public:
    MyDate() {
        year = 0;
        month = 0;
        day = 0;
    }//default constructor
    MyDate(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }//regular constructor
    void setDate(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    string getDate() const {
        return to_string(year) + "/" + to_string(month) + "/" + to_string(day);
    }
};//end of class mydate 
class Person {
protected:
    string name;
    string address;
    string phone;
    string email;
public:
    Person(string name, string address, string phone, string email) {
        this->name = name;
        this->address = address;
        this->phone = phone;
        this->email = email;
    }//regular cosntructor
    virtual void output() {
        cout << "Person: " << name << endl;
    }
};//end of class person

class Student : public Person {
private:
    string status;
public:
    Student(string name, string address, string phone, string email, string status) : Person(name, address, phone, email) {
        this->status=status;
    }//regular costructor
    void output() {
        cout << "Student: " << name << endl;
    }//output()
};//end of class student: inherits from person

class Employee : public Person {
private:
    string office;
    double salary;
    MyDate dateHired;
public:
    Employee(string name, string address, string phone, string email, string office, double salary, MyDate dateHired) : Person(name, address, phone, email) {
        this->office = office;
        this->salary = salary;
        this->dateHired = dateHired;
    }//defalut constructor
    void output() {
        cout << "Employee: " << name << endl;
    }//output()
};//end of class employee: inherits from person

class Faculty : public Employee {
private:
    string officeHours;
    string rank;
public:
    Faculty(string name, string address, string phone, string email, string office, double salary, MyDate dateHired, string officeHours, string rank) : Employee(name, address, phone, email, office, salary, dateHired){
        this->officeHours = officeHours;
        this->rank = rank;
    }//regular constructor
    void output() {
        cout << "Faculty: " << name << endl;
    }//output()
};//end of class faculty: inherits from employee

class Staff : public Employee {
private:
    string title;
public:
    Staff(string name, string address, string phone, string email, string office, double salary, MyDate dateHired, string title) : Employee(name, address, phone, email, office, salary, dateHired){
        this->title = title;
    }//regular constructor
    void output() {
        cout << "Staff: " << name << endl;
    }//output()
};//end of class staff: inherits from employee

int main() {
    //part 1 : create a person object named and show the output
    Person John("John Smith", "123 Main St", "555-1234", "john.smith@email.com");
    John.output();

     //part 2 : create a student object named and show the output
    Student Jane("Jane Doe", "456 Elm St", "555-5678", "jane.doe@email.com", "senior");
    Jane.output();

    //part 3 : create a BOB object named and show the output
    Employee Bob("Bob Johnson", "789 Oak St", "555-9012", "bob.johnson@email.com", "Room 101", 50000.00, MyDate(2023, 2, 2));
    Bob.output();

    //part 4 : create a faculty object named and show the output
    Faculty Alice("Alice Williams", "111 Cherry St", "555-3456", "alice.williams@email.com", "Room 202", 75000.00, MyDate(2021, 1, 1), "M-F 9am-5pm", "Associate Professor");
    Alice.output();
    //part 5 : create a staff object named and show the output
    Staff Mike("Mike Brown", "222 Maple St", "555-7890", "mike.brown@email.com", "Room 303", 40000.00, MyDate(2022, 3, 15), "Administrative Assistant");
    Mike.output();

    return 0;
}
