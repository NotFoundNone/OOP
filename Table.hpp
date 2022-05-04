#pragma once

#include "Group.hpp"
class Table : public Group
{
private:
    int mark;
    std::string **tableOfStudent = new std::string* [value];
public:
    Table(){}
    ~Table(){}
    void setTableOfStudent();
};
