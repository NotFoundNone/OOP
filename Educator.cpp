#include "Educator.hpp"

Educator::Educator()
{
    
}
Educator::Educator(string firstName,string secondName,string lastName, string dateOfBirth): User(firstName,secondName,lastName,dateOfBirth)
{
    
}
Educator::~Educator()
{
    
}
void Educator::setFacultyDepartment(string faculty)
{
    this->facultyDepartment = faculty;
}
void Educator::setWorkExperience(string experience)
{
    this->workExperience = experience;
}
string Educator::getFacultyDepartment()
{
    return this->facultyDepartment;
}
string Educator::getWorkExperience()
{
    return this->workExperience;
}
