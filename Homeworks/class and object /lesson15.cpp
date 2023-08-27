#include<iostream>

using namespace std;
class point{
private:
    double x, y;
public:
    point(double x, double y){
        this->x = x;
        this->y = y;
    } //regular constructor
    ~point(){

    }//destructor
    void output(){
        cout <<"X :" << x << " Y :" << y << endl;
    }//end of point class



};

// point :: point(double x, double y){
//     this->x = x;
//     this->y = y;
// }// implement outside the class 
// class circle relies on class point -> association
class circle{
private:
    double radius;
    point *pcenter;
public:
    circle();
    ~circle();
    void output();
};
circle :: circle(){
    double radius;
    cout << "Enter radius :";
    cin >> radius;
    cout << endl;
    this->radius = radius;

    double x,y;
    cout << " Enter center (x,y) : " << endl;
    cin >> x >> y;

    pcenter = new point(x,y);
}//default comnstructor

circle :: ~circle(){
    delete[] pcenter;
}//destructor

void circle:: output(){
    cout << "The radius is " << radius << endl;
    pcenter -> output();
}//output


int main(){
    circle tom;
    tom.output();

    circle jack;
    jack.output();


    return 0;
}