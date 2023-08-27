#include "human.h"

human::human(string name)
{
    this->name = name;

}

human::~human()
{
    cout << name << endl;

}