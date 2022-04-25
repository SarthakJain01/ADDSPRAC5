#ifndef FilterNonPositive_H
#define FilterNonPositive_H
#include "FilterGeneric.h"
#include <vector>

class FilterNonPositive : public FilterGeneric
{
    private:
    bool g(int);
};
#endif