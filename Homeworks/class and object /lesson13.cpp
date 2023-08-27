#include<iostream>

using namespace std;
class student{
private:
    string name;
    double gpa;
    int* scoreList;
    const int numScores = 5; //length of scorelist

public:
    student(string name, double gpa){
        this-> name = name;
        this-> gpa = gpa; //this used to distinguish from parameter when their names conflict

        scoreList = new int[numScores];
        for(int i = 0; i<numScores; i++){
            scoreList[i] = rand() % 100;        
        } 
    } // constructor is a special member function which share the same name as the class, is used to initialize the attriubutes of the objects

    ~student(){
        delete [] scoreList;
    }// destructor is used to release working buffer(required in c++, otherwise memory leak) 
    
    void output() {
        cout << name << " " << gpa << endl;
        for(int i = 0; i<numScores; i++){
            cout << scoreList[i]<< " ";
        }
    }
};
int main(){
    //part 1: instantiate a student tom
    student tom("TOM", 3.76);
    tom.output();

    //part 2: instantiate another student zhang
    student zhang("zhang", 4.0 );
    zhang.output();
    
    //part 3: instantiate a pointer to student -- mike
    student *pstudent = new student("Mike", 3.5);
    pstudent->output();
    delete[] pstudent;


    return 0;
}