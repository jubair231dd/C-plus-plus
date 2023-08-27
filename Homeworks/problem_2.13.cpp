#include<iostream>
using namespace std;
/*
This program takes the input of monthly savings amount and annual interest rate from the user and returns the total balance in the account after six months
*/
int main(){
    //part 1: prompt the user to enter a monthly savings amount and annual interest rate 
    cout<< "Enter your monthly savings amount: ";
    double monthly_savings;
    cin>> monthly_savings;
    cout<< "Enter the annual interest rate : (%) ";
    double annual_interest_rate;
    cin>> annual_interest_rate;
    //part 2: calculate the balance after the six months
    double monthly_interest_rate;
    monthly_interest_rate = annual_interest_rate / (100*12);

    double balance = 0;
    double updated_monthly_saving;

    //balance after the first month
    balance = monthly_savings + (monthly_savings * monthly_interest_rate);
    updated_monthly_saving = monthly_savings + balance;
    //balance after the second month
    balance = updated_monthly_saving + (updated_monthly_saving * monthly_interest_rate);
    updated_monthly_saving = monthly_savings + balance;
    //balance after the third month
    balance = updated_monthly_saving + (updated_monthly_saving * monthly_interest_rate);
    updated_monthly_saving = monthly_savings + balance;
    cout<<"Balance after three month: " << balance << endl;
    //balance after the fourth month
    balance = updated_monthly_saving + (updated_monthly_saving * monthly_interest_rate);
    updated_monthly_saving = monthly_savings + balance;
    //balance after the fifth month
    balance = updated_monthly_saving + (updated_monthly_saving * monthly_interest_rate);
    updated_monthly_saving = monthly_savings + balance;
    //balance after the sixth month
    balance = updated_monthly_saving + (updated_monthly_saving * monthly_interest_rate);
    updated_monthly_saving = monthly_savings + balance;

    //part 3: return the output
    cout<< "Final balance after six month is: "<< balance << endl;
    return 0;













}