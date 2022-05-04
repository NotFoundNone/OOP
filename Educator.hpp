#pragma once

#include <stdio.h>
#include "first.hpp"

class Educator: public User
{
public:
    Educator();
    Educator(string firstName,string secondName,string lastName, string dateOfBirth): User(firstName,secondName,lastName,dateOfBirth);
    ~Educator();
};
