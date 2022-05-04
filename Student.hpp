#pragma once

#include "first.hpp"

#include <iostream>

class Student: public User
{
private:
    string group;
public:
    Student(){}
    Student(string firstName,string secondName,string lastName, string dateOfBirth, string group): User(firstName,secondName,lastName,dateOfBirth),group(group){}
    ~Student(){}
    void set_group(string value);
    std::string get_group(string value);
};
