#include <iostream>
using namespace std;
#include "ReduceMinimum.h"
#include <vector>

int ReduceMinimum::binaryOperator(int a, int b)
{
    if(a<=b)
    {
        return a;
    }
    return b;
}