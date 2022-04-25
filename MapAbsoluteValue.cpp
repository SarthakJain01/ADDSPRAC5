#include <iostream>
using namespace std;
#include "MapAbsoluteValue.h"
#include "MapGeneric.h"
#include <vector>

int MapAbsoluteValue::f(int b)
{
    if(b<0)
    {
        return -b;
    }
    return b;
};

