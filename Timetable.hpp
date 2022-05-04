#pragma once

#include <iostream>
#include <string>

using namespace std;
class Timetable
{
private:
    string object;
    string time;
    string educator;
    string group;
    string cabinet;
public:
    void addObject();
    void delObject();
};
