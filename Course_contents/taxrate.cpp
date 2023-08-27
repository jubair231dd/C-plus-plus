#include <iostream>
#include <string>
using namespace std;

int main()
{
    //part 1: prompt users name
    string name;
    cout << "Enter Name: " ;
    cin >> name;

    //part 2: prompt users annual household income and taxrate
    double income;
    cout << "Enter Income: " ;
    cin >> income;

    double taxrate;
    cout << "Enter taxrate: " ;
    cin >> taxrate;

    //part 3 :prompt depnedents
    int dependents;
    cout << "Enter dependents: " ;
    cin >> dependents;

    //part 4: calculate tax = (taxrate/100)*income - (dependents*1000)
    double tax;
    tax = taxrate*income - dependents*1000;
    
    //part 5: output tax
    std:: cout << tax; 


    return 0;






}
