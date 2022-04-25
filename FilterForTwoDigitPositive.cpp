#include <iostream>
using namespace std;
#include "FilterForTwoDigitPositive.h"
//#include "FilterGeneric.h"
#include <vector>

bool FilterForTwoDigitPositive::g(int a)
{
    if(a >= 10 && a<100)
    {
        return true;
    }
    return false;
};
