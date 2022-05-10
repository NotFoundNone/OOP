#pragma once

#include <iostream>
#include "Student.hpp"

class Group
{
protected:
    int numberOfStudents = 30;
    Student *students = new Student [numberOfStudents];
public:
    Group();
    Group(int value);
    ~Group();
    void changeNumberOfStudents();
    void addStudent();
    void addStudents();
    void delStudent();
    void delStudents();
};
