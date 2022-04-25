#include <iostream>
#include "MapTriple.h"
#include "MapSquare.h"
//#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
//#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
//#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include <vector>
using namespace std;

int main(void)
{
    MapAbsoluteValue Vector;
    MapTriple Vector1;
    MapSquare Vector2;
    FilterOdd Filter1;
    FilterNonPositive Filter2;
    FilterForTwoDigitPositive Filter3;
    ReduceMinimum Reduce1;
    ReduceGCD Reduce2;
    vector<int>answer = Vector1.map({1,2,3,4,5});
    for(int i =0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
    cout<<endl;
    vector<int>ans2 = Vector2.map({1, 2, 3, 4, 5});
    for(int i =0;i<ans2.size();i++)
    {
        cout<<ans2[i]<<" ";
    }
    cout<<endl;
    vector<int>answer3 = Vector.map({-1,2,-3,4,-5});
    for(int i =0;i<answer3.size();i++)
    {
        cout<<answer3[i]<<" ";
    }
    cout<<endl;
    vector<int>filteranswer1 = Filter1.filter({1,2,3,4,5});
    for(int i =0;i<filteranswer1.size();i++)
    {
        cout<<filteranswer1[i]<<" ";
    }
    cout<<endl;
    vector<int>filteranswer2 = Filter2.filter({-1,2,-3,4,-5});
    for(int i =0;i<filteranswer2.size();i++)
    {
        cout<<filteranswer2[i]<<" ";
    }
    cout<<endl;
    vector<int>filteranswer3 = Filter3.filter({-11,2,33,44,-5});
    for(int i =0;i<filteranswer3.size();i++)
    {
        cout<<filteranswer3[i]<<" ";
    }
    cout<<endl;
    int ReduceAnswer1 = Reduce1.reduce({11,2,33,44,5});
    cout<<ReduceAnswer1<<endl;
    int ReduceAnswer2 = Reduce2.reduce({3,12,9,21,6});
    cout<<ReduceAnswer1<<endl;
    return 0;
}