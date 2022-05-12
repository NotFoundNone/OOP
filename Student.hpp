#pragma once

#include "first.hpp"

#include <iostream>

//Студент - сущность реализована свойствами: имя, фамилия, отчество, дата рождения, группа, курс, направление на котором студент обучается. 

class Student: public User
{
private:
    string group;
    string course;
    string faculty;
public:
    //конструкторы и деструкторы
    Student(){}
    Student(string firstName,string secondName,string lastName, string dateOfBirth, string group, string course, string faculty): User(firstName,secondName,lastName,dateOfBirth),group(group), course(course), faculty(faculty) {}
    ~Student(){}
    //гетеры и сетеры
    void set_group(string group);
    void set_course(string course);
    void set_faculty(string faculty);
    string get_group();
    string get_course();
    string get_faculty();
};
