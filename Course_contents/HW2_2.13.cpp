
#include<iostream>

using namespace std;

int main(){


    //part 1: prompt user to enter the monthly savings amount and annual interest rate
    cout<< "Enter your monthly savings amount: ";
    double monthly_savings;
    cin>> monthly_savings;

    cout<< "Enter the annual interest rate: (%) ";
    double annual_interest_rate;
    cin>> annual_interest_rate;

    //part 2: calculate account balance after six months
    double monthly_interest_rate;
    monthly_interest_rate = annual_interest_rate / (100*12);

    //part 3: return the output
    double balance = 0;
    double updated_monthly_savings = 0;

    //balance after first month
    balance = monthly_savings + (monthly_savings * monthly_interest_rate);
    updated_monthly_savings = monthly_savings + balance;
    //balance after second month
    balance = updated_monthly_savings + (updated_monthly_savings*monthly_interest_rate);
    updated_monthly_savings = monthly_savings + balance;
    //balance after third month
    balance = updated_monthly_savings + (updated_monthly_savings*monthly_interest_rate);
    updated_monthly_savings = monthly_savings + balance;
    //balance after fourth month
    balance = updated_monthly_savings + (updated_monthly_savings*monthly_interest_rate);
    updated_monthly_savings = monthly_savings + balance;
    //balance after fifth month
    balance = updated_monthly_savings + (updated_monthly_savings*monthly_interest_rate);
    updated_monthly_savings = monthly_savings + balance;
    //balance after sixth month
    balance = updated_monthly_savings + (updated_monthly_savings*monthly_interest_rate);
    updated_monthly_savings = monthly_savings + balance;
        
    cout<< "Final Balance is: "<< balance << endl;
    
    return 0;
}