#include<iostream>
using namespace std;
//Part 1: Define the prototype of the function
int gcd(int x, int y);

int main(){
    //part 3: Prompt the user to input two integers
    int x, y;
    cout<< "Enter first integer: ";
    cin >> x;
    cout << endl;
    cout<< "Enter second integer: ";
    cin >> y;

    cout<<"The gcd of "<<x << " and " << y<< " is :" ;
    cout << gcd(x, y) << endl;

    return 0;
}
//Part 2: implement the function to return the gcd
int gcd(int x, int y){
    if(x % y == 0){
        return y;
    }
        else {
            return gcd(y, x%y);
        }
    }
