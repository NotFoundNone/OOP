#pragma once

#include <iostream>
#include <string>

using namespace std;
class Timetable
{
private:
    string subject;
    string time;
    string educator;
    string group;
    string cabinet;
public:
    void addSubject();
    void delSubject();
};
