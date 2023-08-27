#include <iostream>
using namespace std;

//type conversion is basically changing from one datatype to other

int main(){

    double x = (int) 3.14;

    cout<< x << "\n";
    cout<< (char)100 <<"\n";

    int correct = 8;
    int questions = 10;
    double score = correct/(double) questions; // this type conversion returns a double output
    cout << score <<"\n";

    return 0;
}