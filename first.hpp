#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
//Класс User описывающий пользователя
class User
{
private:
    string firstName;
    string secondName;
    string lastName;
    string dateOfBirth;
public:
    //конструкторы и деструкторы
    User(){}
    User(string firstName,string secondName,string lastName, string dateOfBirth): firstName(firstName), secondName(secondName), lastName(lastName), dateOfBirth(dateOfBirth){}
    ~User(){}
    //гетеры и сетеры
    void set_firstName(string value);
    void set_secondName(string value);
    void set_lastName(string value);
    void set_dateOfBirthName(string value);
    string get_firstName();
    string get_secondName();
    string get_lastName();
    string get_dateOfBirth();
};

