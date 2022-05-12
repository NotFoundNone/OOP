#pragma once

#include "Group.hpp"
#include "Mark.hpp"
//Таблица - сущность реализована двумерным массивом, состоящим из объектов класса Студент и оъектов класса Оценка.
class Table : public Group
{
private:
    Mark mark;
    std::string **tableOfStudent = new std::string* [numberOfStudents];
public:
    Table(){}
    ~Table(){}
    void setTableOfStudent(); //создание двумерного массива
    void addMark(Mark mark); //добавление оценки в журнал
};
