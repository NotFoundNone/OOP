#pragma once
#include <iostream>
#include "Educator.hpp"
#include "Tasks.hpp"
using namespace std;
//Предмет - сущность релизована с помощью полей:  преподаватель, задания, таймлайн предмета.
class Subject
{
private:
    Educator educator;
    Tasks Task;
    string Term;
public:
    void setEducator(Educator educator); //метод добавляющий преподавателя
    void setTask(Tasks Task); //метод добавляющий задание
    void setTerm(string Term); //метод довляющий таймлайн предмета
    Educator getEducator();
    Tasks getTask();
    string getTerm();
};
