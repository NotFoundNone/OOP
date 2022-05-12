#pragma once

#include <iostream>
#include <string>
#include "Subject.hpp"

//Расписание - сущность реализована со свойствами: предмет, время, преподаватель, кабинет, группа.
using namespace std;
class Timetable
{
private:
    Subject subject;
    string time;
    string group;
    string cabinet;
public:
    void addObject(Subject subject, string time, string group, string cabinet); //добавление предмета
    void delObject(Subject subject, string time, string group, string cabinet); //удаление предмета
};
