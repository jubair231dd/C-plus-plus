

#include<iostream>
using namespace std;

int main(){

    //  part 1 : if - else statement

    // section 1.1: prompt users to input the household income
    double income;
    cout<< "Enter the household income: ";
    cin >> income;

    // section 1.2: define variables
    double taxRate;
    double tax;

    // section 1.3: calculate taxRate
    if(income < 5000) taxRate = 0;
    else{
        if(income < 30000) taxRate = 0.05;
        else{
            if(income < 100000) taxRate = 0.15;
            else{
                taxRate = 0.25;
            }
        }
    }

    // section 1.4: calculate the overall tax amount and output it 
    tax = income * taxRate;
    cout << " Your tax amount is :" << tax << '\n';

    //part 2 : short - cut if -else
    string comment = tax > 2000? "Thank you" : "You owe our country";
    cout << comment << endl;
    
    string status = income > 100000? " Rich family" : "Poor family";
    cout << status << endl;


    // part 2: demo switch statement (only applicable over int/char)
    int level = 2;
    switch(level){
        case 0 : cout << "poor" << endl; break;
        case 1 : cout << "middle class" << endl; break;
        default : cout << " rich people" << endl; break;
    }


    return 0;
}