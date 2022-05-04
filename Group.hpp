#pragma once

#include <iostream>

class Group
{
protected:
    int value = 0;
    std::string *students = new std::string [value];
public:
    Group();
    Group(int value);
    ~Group();
    void addStudent();
    void addStudents();
    void delStudent();
    void delStudents();
};
