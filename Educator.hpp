#pragma once

#include <stdio.h>
#include "first.hpp"

//Преподаватель - сущность реализована свойствами: имя, фамилия, отчество, дата рождения, кафедра на которой работает преподаватель, опыт преподавателя. 
class Educator: public User
{
private:
    string facultyDepartment;
    string workExperience;
public:
    Educator();
    Educator(string firstName,string secondName,string lastName, string dateOfBirth);
    ~Educator();
};
