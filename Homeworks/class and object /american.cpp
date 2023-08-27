#include "american.h"
#define HUMAN_H

american::american(string name, double salary)
{
    this->salary = salary;

}

american::~american()
{

}
void american:: output(){
    human :: output();
    cout << salary << endl;
}