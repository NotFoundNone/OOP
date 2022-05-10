#pragma once
#include <iostream>
using namespace std;
class Tasks
{
private:
    string Subject;
    string ex;
public:
    void setSubject(string value);
    void setEx(string value);
    string getSubject();
    string getEx();
};
