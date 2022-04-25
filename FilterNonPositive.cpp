#include <iostream>
using namespace std;
#include "FilterNonPositive.h"
//#include "FilterGeneric.h"
#include <vector>

bool FilterNonPositive::g(int a)
{
    if(a < 0)
    {
        return true;
    }
    return false;
};
