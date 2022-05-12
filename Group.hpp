#pragma once

#include <iostream>
#include "Student.hpp"

//Группа - сущность реализована массивом, который состоит из объектов класса студент.
class Group
{
protected:
    int numberOfStudents = 30;
    Student *students = new Student [numberOfStudents];
public:
    //конструкторы и деструкторы
    Group();
    Group(int value);
    ~Group();
    
    void changeNumberOfStudents(int value); //метод меняющий кол-во студентов в группе
    void addStudent(Student student); //метод добавлюящий студента в группу
    void addStudents(Student *students); //метод добавляющий несколько студентов в группу
    void delStudent(Student student); //метод удаляющий студента в группу
    void delStudents(Student *students); //метод удаляющий несколько студентов в группу
};
