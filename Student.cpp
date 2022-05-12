
#include "Student.hpp"

void Student::set_group(string group)
{
    this->group = group;
}
void Student::set_course(string course)
{
    this->course = course;
}
void Student::set_faculty(string faculty)
{
    this->faculty = faculty;
}
string Student::get_group()
{
    return this->group;
}
string Student::get_course()
{
    return this->course;
}
string Student::get_faculty()
{
    return this->faculty;
}
