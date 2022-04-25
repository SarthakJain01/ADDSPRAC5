#include <iostream>
using namespace std;
#include "ReduceGeneric.h"
#include <vector>

int ReduceGeneric::binaryOperator(int a, int b)
{
    if(a<=b)
    {
        return a;
    }
    return b;
}

int ReduceGeneric::reduce(vector<int>Myvector){
    int counter = 0;
    static int result = 0;
    if(Myvector.size()<=1)
    {
        result = 0;
        return Myvector.at(0);
    }
    result = binaryOperator(Myvector[counter],Myvector[counter+1]);
    Myvector.erase(Myvector.begin());
    Myvector.at(0) = result;
    return reduce(Myvector);
}