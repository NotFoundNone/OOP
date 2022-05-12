#pragma once
#include <iostream>
#include "File.hpp"
using namespace std;
//Задания - сущность реализована с помощью полей типа:  задание, таймлайн.
class Tasks
{
private:
    string exercise;
    string Timeline;
    File file;
    
public:
    void setExercise(string exercise); //добавление задания
    void setTimeline(string time); //добавление таймлайна задания
    void setFile(File file);
    string getExercise(); 
    string getTimeline();
    File getFile();
};
