#include<iostream>
#include <ctime>

using namespace std;

//create the Account class
class Account{
private:
    int id;
    double balance;
    double annualInterestRate;
    time_t dateCreated;

public:
    Account(){
        id = 0;
        balance = 0.0;
        annualInterestRate = 0.0;
        dateCreated = time(nullptr);
    } // default constructors: no parameters/attributes are given

    Account(int id, double balance){
        this->id = id; 
        this->balance = balance;
    } //regular constructor: the paramters are initialized

    int getId() const{
        return id;
    }// Accessor: returns the id
    void setId(int id){
        this->id = id;
    } //mutator : sets a give id by the user
    double getBalance(){
        return balance;
    } //accessor : returns the balance
    void setBalance(double balance){
        this->balance = balance;
    } //mutator : sets a given balance 
    void setAnnualInterestRate(double annualInterestRate) {
        this->annualInterestRate = annualInterestRate;
    } // mutator : sets a specific interest rate
    double getMonthlyInterestRate(){
        return annualInterestRate / 100*12;
    }//accessor : returns the monthly interest rate
    double monthlyInterest(){
        return balance * getMonthlyInterestRate();
    }//accessor : returns the monthly interest
    void withdraw(double amount){
        balance = balance - amount; 
    }//mutator : withdwars an amount from the balance 
    void deposit(double amount){
        balance = balance + amount;
    }//mutator : deposits an amount to the balance

    time_t getDateCreated() {
    // current date/time based on current system
    time_t now = time(0);

    // convert now to string form
    char* dt = ctime(&now);

    cout << dt << endl;
    } // accessor : return the date an time of creating the account

}; //end of class Account

int main(){
    //part 1: create an account 
    Account account1 (1122,20000);
    account1.setAnnualInterestRate(4.5);
    account1.withdraw(2500);
    account1.deposit(3000);

    //part 2:return the balance, interest rate and the time of creating the account
    cout<< "Balance : $" << account1.getBalance() << endl;
    cout<< "Monthly Interest : $" << account1.getMonthlyInterestRate() << endl;
    cout << "Date Created: " << account1.getDateCreated() << endl;

    return 0;
}
