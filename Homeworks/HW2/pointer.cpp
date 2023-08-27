
#include<iostream>
using namespace std;

int main(){
    int x = 5;
    cout << x << endl;
    int *p = &x;
    cout << "Address: " << p <<endl;
    cout << "Value :" << *p << endl;

    int md[4] = {1,2,3,4};
    int *pmd = md; //md is pointer to the first element of the array md[0]
    cout <<"Address: " << pmd<< endl;
    cout<< "Value: "<< *pmd<< endl;
}