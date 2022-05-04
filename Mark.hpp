#pragma once

#include <iostream>
class Mark
{
private:
    std::string notation[4] = {"five-point", "ten-point", "twelve-point", "one hundred point"};
    int fivePointMark[5] = {1,2,3,4,5};
    int tenPointMark[10] = {1,2,3,4,5,6,7,8,9,10};
    int twelvePointMark[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int oneHundredPointMark[100] = {1,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
public:
    void selectMarkPoint();
    void addMark();
    void delMark();
};
