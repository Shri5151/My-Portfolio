#include<iostream>
using namespace std;

template<class T>

void Display(T Arr[] , int iSize)
{
    int iCnt = 0;
    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n"; 
        }
}




int main()
{
    int iData [] = {10,20,30,40};
    float fData [] = {10.23, 20.33, 30.51, 40.55};
    char cData [] = {'a','b','c','d'};

    Display(iData,4);
    Display(fData,4);
    Display(cData,4);


    return 0;
}