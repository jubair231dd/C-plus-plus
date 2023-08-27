
#include<iostream>
using namespace std;
/*
This program prompts the user to enter the year and first day of that years and returns the first day of each month of that year
*/
//use switch to get the string day name from int input
string first_day_of_year_string(int first_day_of_year){
    string dayString = "";
    switch(first_day_of_year){  

        case 0: dayString = "Sunday"; break;
        case 1: dayString = "Monday"; break;
        case 2: dayString = "Tuesday"; break;
        case 3: dayString = "Wednesday"; break;
        case 4: dayString = "Thursday"; break;
        case 5: dayString = "Friday"; break;
        case 6: dayString = "Saturday"; break;


        }
        return dayString;
        }

int main(){
    //part 1 : prompt the user to enter the year and the first day of the year
    int year;
    cout<< "Enter the year: ";
    cin>> year;

    int first_day_of_year;
    cout<< "Please enter the first day of the year: ";
    cin>> first_day_of_year;
    //part 2 : do the calculation and return the first day of each month of that year
    int number_of_days_in_month;
    string dayString = "";

    for(int month = 1; month <=12; month++){
        switch(month){
            
            case 1: cout<< "January 1, " << year << " is ";
            number_of_days_in_month = 31;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString << endl;
            break;

            case 2: cout<< "February 2, " << year << " is ";
            if((year % 4 ==0 && year % 100 != 0) || year % 400 ==0){
                number_of_days_in_month = 29;
            }
            else{
                number_of_days_in_month = 28;
            }
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString << endl;
            break;

            case 3: cout<< "March 1, " << year << " is ";
            number_of_days_in_month = 31;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString << endl;
            break;

            case 4: cout<< "April 1, " << year << " is ";
            number_of_days_in_month = 30;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString << endl;
            break;

            case 5: cout<< "May 1, " << year << " is ";
            number_of_days_in_month = 31;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString << endl;
            break;

            case 6: cout<< "June 1, " << year << " is ";
            number_of_days_in_month = 30;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString << endl;
            break;

            case 7: cout<< "July 1, " << year << " is ";
            number_of_days_in_month = 31;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString << endl;
            break;

            case 8: cout<< "August 1, " << year << " is ";
            number_of_days_in_month = 31;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString << endl;
            break;

            case 9: cout<< "September 1, " << year << " is ";
            number_of_days_in_month = 30;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString << endl;
            break;

            case 10: cout<< "October 1, " << year << " is ";
            number_of_days_in_month = 31;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString <<endl;
            break;

            case 11: cout<< "November 1, " << year << " is ";
            number_of_days_in_month = 30;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString <<endl;
            break;

            case 12: cout<< "December 1, " << year << " is ";
            number_of_days_in_month = 31;
            dayString = first_day_of_year_string(first_day_of_year);
            cout<< dayString << endl;
            break;
        }
        //getting the start day of the next month
        first_day_of_year = (first_day_of_year + number_of_days_in_month) % 7;

    }
    return 0;
}
