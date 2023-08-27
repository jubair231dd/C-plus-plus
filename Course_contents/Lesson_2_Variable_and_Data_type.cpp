
#include<iostream>
#include<string>


using namespace std;

int main(){
    // part 1: compute the household income tax usingde a sequence of primitive variable
    cout<< "Enter the name: ";
    string name;
    cin>> name;

    cout<<"Enter income amount: ";
    double income;
    cin>> income;

    const double tax_rate = 0.15;
    double tax;

    tax = income * tax_rate;

    cout<< name <<" has to pay " << tax << "$" <<endl;

    // part 2: define a enum data type and then use it
    enum Weekday{Mon,Tue,Wed,Thr,Fri,Sat,Sun} today;
    today = Thr;
    cout << "Today is: " << today << endl;

    // part 3: define a struct Student and then use it
    struct student{
        string name;
        double gpa;
        string email;
    };

    student jamil;
    jamil.name = "Nayeem jamil hamu";
    jamil.gpa = 4.00;
    jamil.email = "Namyeemjamil@gmail.com";

    cout<< jamil.name << " got " << jamil.gpa << " and his email is "<< jamil.email <<endl;




    return 0;
}