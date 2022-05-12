#pragma once
#include <iostream>
using namespace std;
//Файл - сущность реализована с помощью поля: путь к файлу.
class File
{
private:
    string pathWayToFile;
public:
    void setPathWayToFile(string way); //метод добавляющий путь к файлу
    string getPathWayToFile();
};
