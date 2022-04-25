#ifndef ReduceGeneric_H
#define ReduceGeneric_H
#include <vector>

class ReduceGeneric
{
    private:
    virtual int binaryOperator(int,int);
    public:
    virtual int reduce(std::vector<int>);

};

#endif