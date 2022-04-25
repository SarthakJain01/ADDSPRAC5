#include <iostream>
using namespace std;
#include "FilterOdd.h"
//#include "FilterGeneric.h"
#include <vector>

bool FilterOdd::g(int a)
{
    if(a%2 == 1)
    {
        return true;
    }
    return false;
};
