

#include<iostream>

using namespace std;
/*
This program prompts the user to input the length of three edges of a triangle and returns the perimeter of the triangle
*/
int main(){

    //part 1: prompt the user to input the length of the three edges of a triangle
    double edge_1, edge_2, edge_3;
    cout<< "Enter the length of the first side: ";
    cin>> edge_1;

    cout<< "Enter the value of the second side: ";
    cin>> edge_2;

    cout<< "Enter the value of the third side: ";
    cin>> edge_3;
    //part 1.1: validate the input length the edges
    if(edge_1 > 0 && edge_2 > 0 && edge_3 > 0){
        cout<< "The length of the edges are valid" << endl;
    }
    else{
        cout<< "Edge length can't be zero or negative" << endl;
    }
    
    //part 2: calcaulate the peremeter and show the output
    if(edge_1+edge_2 > edge_3 && edge_2+edge_3 > edge_1 && edge_1+edge_3 > edge_2){
        double peremeter;
        peremeter = edge_1+edge_2+edge_3;
        cout<<"The peremeter of the triangle is: " << peremeter << endl;
    }
    else{
        cout<< "The input is not valid: The sum of the lenth of any two pairs of the side must be greater than the other side" << endl;
    }

    return 0;
}