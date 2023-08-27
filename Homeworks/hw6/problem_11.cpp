#include<iostream>
#include<string>

using namespace std;

int main(){
    //part 1 : prompt the user to enter the weight
    cout << "Enter the weight: ";
    double weight;
    cin >> weight;

    //part 2 : prompt the user to answer wether it is international or not
    cout << "Is it international(Y/N)?";
    char international;
    cin >> international;

    //part 3: calcualate the post rate 
    double postRate;
    if(weight<=30){
        postRate = 0.41;
    }
    else{
        postRate = 0.41+(weight-30)*0.05;
    }

    //part 4 : calculate the international post rate
    if(international == 'Y' || international == 'y')
    {
        postRate = postRate * 1.15;
    }

    cout << "The post rate is $" <<postRate<<endl;

return 0;

}