#include<iostream>
#include<string>

using namespace std;

//part 1: abstract data type(T)(it can be int, double string) ; template function
template <class T>
void ssss(T& x, T& y){
    T tmp = x;
    x = y;
    y = tmp;
}// template function: some parameters are abstract datatype
//polymorphism : one function ssss behaves differently under different data type
//part 2: template class
template <class viji>
class student {
private:
    string name;
    viji score; //viji abstract data type; it can be int , string anything
public:
    student(string name, viji score){
        this->name = name;
        this->score = score;
    }//regular constructor
    void output(){
        cout << name << score << endl;
    }//output()

};
//part 3: stack data type implementation : FILO
template <class selina>
class stack{
private:
    selina* list;
    const int MaxSize = 100;
    int numElements;
public:
    stack(){
        list = new selina[MaxSize];
        numElements = 0;
    } //default constructor
    ~stack(){
        delete [] list;
    } // destructor
    void push(selina x){
        list [numElements++] = x;
    }//push()
    selina pop(){
        return list[--numElements];
    }//pop()
    void output(){
        // cout << "Bottom" << endl;
        for(int i = 0; i < numElements; i++){
            cout << list[i] << endl;
            // cout << "top" << endl;
        }
    }

};

int main(){
    //part 1 : template function(one or more that one paramters are of ADT)
    int selina = 8;
    int viji = 6;
    ssss(selina, viji);
    cout << "After swap : selina is: "<< selina << " Viji is : " << viji << endl;

    string derekStr = "Anderson";
    string elenaStr = "Smith";
    ssss(derekStr, elenaStr);
    cout << "After swap : derekStr is: "<< derekStr << " elenaStr is : " << elenaStr << endl;

    //part 2 : template class (one or more than one attributes are of ADT)
    student<int>taylor("Taylor", 98);
    taylor.output();

    student<char>victoria("V. sinnot", 'A');
    victoria.output();

    //part 3: stack
    stack<string>liang;
    liang.push("Andrew");
    liang.push("Selina");
    liang.push("Taylor");
    liang.output();
    liang.pop();
    liang.output();

    return 0;
}
