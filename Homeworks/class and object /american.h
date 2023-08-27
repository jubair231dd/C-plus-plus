#ifndef AMERICAN_H
#define AMERICAN_H
#include<iostream>
#include "human.h"
using namespace std;

#pragma once

class american
{
public:
    american(string name , double salary);
    ~american();
    void output();
     void greet(); //you have to implement it because it is a pure virtual function 

private:
    double salary;
    
};

#endif