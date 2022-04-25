#include <iostream>
using namespace std;
#include "MapGeneric.h"
#include <vector>

int MapGeneric::f(int a)
{
    return (a*a);
};


vector<int>MapGeneric::map(vector<int>myVector)
{   int counter = myVector.size();
    static vector<int>countervector(myVector.size());
    if(counter == 0)
    {
        return countervector;
    }
    else
    {   counter--;
        countervector.at(counter) = f(myVector.at(counter));
        myVector.pop_back();
        return map(myVector);
    }
};
