

#include<iostream>
#include<cmath>
using namespace std;
/*
This program prompts the user to input the center co-ordinates and the radius of two circles and decides 
whether the second circle is inside the first circle or overlaps with the first one
*/
int main(){
    //part 1: prompt the user to enter the center co-ordinates and the radious of two circles
    double x1, y1, x2, y2, radius_1, radius_2;
    cout<< "Enter the x co-ordinate(x1) of the first circle: ";
    cin>> x1;
    cout<< "Enter the y co-ordinate(y1) of the first circle: ";
    cin>> y1;

    cout<< "Enter the x co-ordinate(x2) of the second circle: ";
    cin>> x2;
    cout<< "Enter the y co-ordinate(y2) of the second circle: ";
    cin>> y2;

    cout<< "Enter the radius of the first circle: ";
    cin>> radius_1;
    cout<< "Enter the radius of the second circle: ";
    cin>> radius_2;

    //part 1.1 : check whether the radius is correct input or not
    if(radius_1 > 0 && radius_2 > 0){
        cout << "Radius is valid." << endl;
    }
    else{
        cout<< "Radius is a lenth which can't be zero or negative, If the radius is zero then its a point not a circle" << endl;
    }   

    //part 2: decide whether the second circle is inside the first one or not or overlaps each other
    double center_distance;
    //part 2.1 : center distance is found by using the formula to find the distance between two points
    center_distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    //part 2.2 : if the center distance is less than or equal than the absolute distances between the radious then circle_2 is inside circle_1
    if(center_distance <= abs(radius_1 - radius_2)){
        cout<< "Circle2 is inside Circle1" << endl;
    }
    //part 2.2 : if the center distance is less than or equal than the sum of the absolute distances between circle_2 is inside circle_1 the they are overlapping
    else if(center_distance <= abs(radius_1 + radius_2)){
        cout<< "Circle2 overlaps circle1" << endl;
    }
    //part 2.2 : otherwise circle two doesn't overlap
    else{
        cout<< "Circle2 does not overlap Circle1" << endl;
    } 
     return 0;
}