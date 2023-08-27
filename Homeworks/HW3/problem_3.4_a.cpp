#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
/*
A program is needed that generates a random number between 1 and 100, then prompts the user to make a guess.
If the user's guess is too high or too low, the program should display a message indicating that the guess was "too high" or "too low". 
The user should be allowed to keep guessing until they successfully guess the correct number.
*/
int main(){
    //part 1: Initiate the variables to count and store the random and the guess number
    int count = 0;
    int guessNumber, randomNumber;
    //part 2: setting up the condition to prompt the user until the correct  guess is acheived 
    while(guessNumber!=randomNumber){
    //part 3: Prompt the user to enter the guess number 
    cout << "Enter your guess between 1 to 100: ";
    cin >> guessNumber;
    cout<< "Your guess : "<< guessNumber << endl;
    //part 4: Generate a random number between 1 to 100
    randomNumber = rand() % 100 +1 ;
    cout << "Random number was : " << randomNumber << endl;
        count++;
    //part 5: if the guess and the random number are correct then the program will show the total count to get the correct guess
    if (guessNumber == randomNumber){
        cout << "Correct guess !" << endl;
        cout << "It took " << count << " guesses to guess the correct number" << endl;
    }
    //part 5: The program will output too high or too low if the guess is above or below the correct guess
    else if(guessNumber > randomNumber){
        cout << " Too high" << endl;
    }
    else {
        cout << "Too low" << endl;
    }

    }
    return 0;
}