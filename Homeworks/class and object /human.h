#ifndef HUMAN_H
#define HUMAN_H
#include<string>
#include<iostream>
using namespace std;

#pragma once

class human
{
public:
    human(string name);
    ~human();
    void output();
    virtual void greet() = 0; //pure virtual class 

private:
    string name;

};

#endif