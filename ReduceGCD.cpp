#include <iostream>
using namespace std;
#include "ReduceGCD.h"
#include "ReduceGeneric.h"
#include <vector>

int ReduceGCD::binaryOperator(int x,int y)
{
if(x>y)
{	if(y==0)
		return x;
	return binaryOperator(y,x%y);
}
	if(x==0)
		return y;
	return binaryOperator(x,y%x);
}