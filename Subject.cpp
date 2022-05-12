
#include "Subject.hpp"


void Subject::setEducator(Educator educator)
{
    this->educator = educator;
}
void Subject::setTask(Tasks Task)
{
    this->Task = Task;
}
void Subject::setTerm(string Term)
{
    this->Term = Term;
}
Educator Subject::getEducator()
{
    return this->educator;
}
Tasks Subject::getTask()
{
    return this->Task;
}
string Subject::getTerm()
{
    return this->Term;
}
