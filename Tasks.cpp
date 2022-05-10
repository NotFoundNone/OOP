
#include "Tasks.hpp"

void Tasks::setSubject(string value)
{
    this->object = value;
}
void Tasks::setEx(string value)
{
    this->ex = value;
}
string Tasks::getSubject()
{
    return this->object;
}
string Tasks::getEx()
{
    return this->ex;
}
