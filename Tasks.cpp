
#include "Tasks.hpp"

void Tasks::setExercise(string exercise)
{
    this->exercise = exercise;
}
void Tasks::setTimeline(string time)
{
    this->Timeline = time;
}
void Tasks::setFile(File file)
{
    this->file = file;
}
string Tasks::getExercise()
{
    return this->exercise;
}
string Tasks::getTimeline()
{
    return this->Timeline;
}
File Tasks::getFile()
{
    return this->file;
}
