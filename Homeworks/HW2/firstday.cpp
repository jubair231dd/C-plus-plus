

#include<iostream>
using namespace std;

//function which returns the string name of the day from the integer input from the user
string first_day_of_the_year_string(int first_day_of_the_year){
    string dayString = "";
    switch (first_day_of_the_year)
    {
    case 0: dayString = "Sunday";break;
    case 1: dayString = "Monday";break;
    case 2: dayString = "Tuesday";break;
    case 3: dayString = "Wednesday";break;
    case 4: dayString = "Thursday";break;
    case 5: dayString = "Friday";break;
    case 6: dayString = "Saturday";break;

    }
    return dayString;


}



int main(){
    //part 1: enter the year and the first day of the year as an integer value
    int year;
    cout<< "Enter the year : ";
    cin >> year;

    int first_day_of_the_year;
    cout<<"Enter the first day of the year, sunday=0, monday=1, tuesday = 2: ";
    cin >> first_day_of_the_year;

    //part 2: write the code and return the expected output
    int number_of_days_month;
    string daystring = "";
    for(int month = 1; month <= 12; month++){
        switch(month){
            case 1 : cout << "January 1, " << year << " is ";
            number_of_days_month = 31;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;

            case 2 : cout << "February 1, " << year << " is ";
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
                number_of_days_month = 29;
            }
            else{
                number_of_days_month = 28;
            }
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;

            case 3 : cout << "March 1, " << year << " is ";
            number_of_days_month = 31;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;

            case 4 : cout << "April 1, " << year << " is ";
            number_of_days_month = 30;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;

            case 5 : cout << "May 1, " << year << " is ";
            number_of_days_month = 31;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;

            case 6 : cout << "June 1, " << year << " is ";
            number_of_days_month = 30;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;

            case 7 : cout << "July 1, " << year << " is ";
            number_of_days_month = 31;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;

            case 8 : cout << "August 1, " << year << " is ";
            number_of_days_month = 31;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;

            case 9 : cout << "September 1, " << year << " is ";
            number_of_days_month = 30;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;

            case 10 : cout << "October 1, " << year << " is ";
            number_of_days_month = 31;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;

            case 11 : cout << "November 1, " << year << " is ";
            number_of_days_month = 30;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;


            case 12 : cout << "December 1, " << year << " is ";
            number_of_days_month = 31;
            daystring = first_day_of_the_year_string(first_day_of_the_year);
            cout << daystring << endl;
            break;
        }
        //get the first day of the next month after each iteration
        first_day_of_the_year =(first_day_of_the_year + number_of_days_month) % 7;
    } 











    return 0;
}

