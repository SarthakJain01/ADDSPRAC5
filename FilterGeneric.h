#ifndef FilterGeneric_H
#define FilterGeneric_H
#include <iostream>
#include <vector>

class FilterGeneric
{
    private:
        virtual bool g(int);
    public:
        virtual std::vector<int> filter(std::vector<int>);
};


#endif