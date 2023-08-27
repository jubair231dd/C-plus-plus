#include<iostream>

using namespace std;

//Modifiers define the accessibilities of the attributes and member functions
// private indicates that function/attribute accerssible using the class 
// public indicates that the member functions / attributes are accessible everywhere

class Faculty{
private:
    string name;
    double salary;

public:
    Faculty(){
        name = "Mike";
        salary = 100;
    } // default constructors: no parameters/attributes are given

    Faculty(string name, double salary){
        this->name = name; 
        this->salary = salary;
    } //regular constructor: the attributes / paramters are initialized using paramerters

    Faculty(const Faculty& af){
        name = af.name;
        salary = af.salary;
    } //copy constructor: the parameters are initialized according to another object

    ~Faculty(){

    } // destructor: used to release the dynamic array

    void output(){
        cout << name << " " << salary << endl;
    } //output

    void setSalary(double salary){
        this->salary = salary;
    } // mutator: used to update/change the attributes 

    double getSalary(){
        return salary;
    } // accessor: used to read the attributes
}; //end of class faculty

int main(){
    //part 1 : instantiate a Faculty object jenny using default constructor
    cout<< "Jenny(default) : " << endl;
    Faculty jenny;
    jenny.output();

    //part 2: instantiate a Faculty object tom using regular constructor
    cout<< "Tom(regular) : " << endl;
    Faculty tom("Tom", 200);
    tom.output();

    //part 3: instantiate a Faculty object donald using copy constructor
    cout<< "Donald(copy of tom) : " << endl;
    Faculty donald(tom);
    donald.output();

    //part 4: output the salary of donald 
    cout<< "Donald's salary is : " << donald.getSalary() << endl;

    //part 5: change the salary of donald using mutator
    donald.setSalary(500000);

    //part 6: output the updated salary of donald
    cout<< "Donald's new/updated salary is : " << donald.getSalary() << endl;

    return 0;
}