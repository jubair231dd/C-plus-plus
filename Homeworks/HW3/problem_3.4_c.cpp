#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
/*
This program can guess the user's secret number between 1 and 100 in 7 or fewer attempts
*/
int main(){
    //part 1: Initiate the variables to count and store the random and the guess number
    int count = 0;
    int userGuess, randomNumber, low = 1, high = 100, newHigh = 0;
    //part 2: Prompt the user to enter the guess number 
    cout << "Enter your guess between 1 to 100: ";
    cin >> userGuess;
    cout<< "Your guess : "<< userGuess << endl;
    //part 3: setting up the condition to prompt the user until the correct  guess is acheived 
    srand(time(NULL));
    while(userGuess!=randomNumber){
        count++;
        //part 3.1: if the count exceeds 7 then the computer can't find the correct guess in 7 or below trials
        if(count>7){
            cout<< "Computer can't guess it in 7 or less guesses!"<< endl;
            break;
        }
        //part 3.2: fix the computer guess to take the midpoint
        randomNumber = rand() % high + low;
        cout << "Computer guess number was : " << randomNumber << endl;

        //part 3.3: depending on the user response it uopdates the two terminal values to shring the guessing region
    if(userGuess == randomNumber){
        cout << "Hooray! You have found the number in " << count << " guess" << endl;
        break;
    }
    else if(randomNumber < userGuess){
        cout << "Too Low!" << endl;
        newHigh = low + high;
        low = randomNumber + 1;
        high = newHigh - low;
        for(int i = 0; i < newHigh; i++){
            if((low+i) < userGuess ){
                low = low + i;
                high = newHigh - low;
            }
        }
    }
    else if(randomNumber > userGuess){
        cout << "Too high!" << endl;
        high = randomNumber - low;
        for(int i = 0; i < randomNumber-1; i++){
            if((randomNumber-1) > userGuess ){
                high = (randomNumber-1) - low;
            }
        }
    }
    }
    cout << "It took "<< count << " trials to guess the number " << endl;
    return 0;
}