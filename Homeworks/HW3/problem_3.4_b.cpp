#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
/*
Modified the program so that instead of the user guessing a number the computer came up with,
the computer guesses the number that the user has secretly decided. 
The user must tell the computer whether it guesed too high or too low.
*/
int main(){
    srand(time(NULL));
    //part 1: Initiate the variables to count and store the random and the guess number
    int count = 0;
    int guessNumber, randomNumber;
    //part 2: setting up the condition to prompt the user until the correct  guess is acheived 
    while(guessNumber!=randomNumber){
    //part 3: Prompt the user to enter the guess number 
    cout << "Enter the number you want the computer to guess between 1 to 100: ";
    cin >> guessNumber;
    cout<< "Your guess : "<< guessNumber << endl;
    //part 4: Generate a random number between 1 to 100
    randomNumber = rand() % 100 +1 ;
    cout << "Random number was : " << randomNumber << endl;
        count++;
    //part 5: if the computer guess guess and the user guess are correct then the program will show the total count to get the correct guess
    if (guessNumber == randomNumber){
        cout << "Correct guess !" << endl;
        cout << "It took " << count << " guesses for the computer to guess the number you guessed" << endl;
    }
    //part 5: The program will output too high or too low if the guess is above or below the correct guess
    else if(randomNumber > guessNumber){
        cout << " Too high"  << endl;
    }
    else {
        cout << "Too low" << endl;
    }

    }
    return 0;
}
