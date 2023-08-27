// class inheritence

#include<iostream>
#include<string>
using namespace std;

class student{
private:
    string name;
    double gpa;
public:
    student(string name, double gpa){
        this->name = name;
        this->gpa = gpa;
    }// regular constructor
    ~student() {}; //destructor : always needed
    void output(){
        cout << name <<" "<< gpa << endl;
    }

}; // class stduent

// in java : class freshman extends student
class freshman : public student {
private:
    int actMath;
public:
    freshman(string name, double gpa, int actMath) : student(name, gpa){
        this->actMath = actMath;
    } //student(name, gpa) denotes invoking the regular constructor of base class
    //regular constructor

    ~freshman() {}; //destructor

    void output(){
        student :: output(); //invoking a member function in base class 
        cout << "Act Math : " << actMath << endl;
    }

}; //class freshman

int main(){
    student derek = student("derek", 3.990);
    derek.output();
    
    freshman tom = freshman("tom", 3.45, 100);
    tom.output();


    return 0;
}