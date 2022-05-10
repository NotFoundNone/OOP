#pragma once

#include "Group.hpp"
class Table : public Group
{
private:
    int mark;
    std::string **tableOfStudent = new std::string* [numberOfStudents];
public:
    Table(){}
    ~Table(){}
    void setTableOfStudent();
    void addMark();
};
