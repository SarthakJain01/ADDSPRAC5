#ifndef MapGeneric_H
#define MapGeneric_H
//#include "MapTriple.h"
//#include "MapSquare.h"
#include <iostream>
#include <vector>

class MapGeneric
{
    private:
        virtual int f(int);
    public:
        virtual std::vector<int> map(std::vector<int>);
        //friend class MapTriple;
        //friend class MapSquare;
};


#endif