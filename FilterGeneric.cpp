#include <iostream>
using namespace std;
#include "FilterGeneric.h"
#include <vector>

bool FilterGeneric::g(int a)
{
    if(a%2 == 1)
    {
        return true;
    }
    return false;
};


vector<int>FilterGeneric::filter(vector<int>myVector)
{   static int counter = 0;
    if(counter == myVector.size())
    {
        counter = 0;
        return myVector;
    }

    if(g(myVector.at(counter)) == false){
        myVector.erase(myVector.begin() + counter);
    }
    else{
        counter++;
    }
    return filter(myVector);
};