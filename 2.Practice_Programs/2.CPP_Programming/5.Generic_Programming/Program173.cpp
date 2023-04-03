#include<iostream>
using namespace std;

template<class T>

T Addition(T Arr[] , int iSize)
{
    int iCnt = 0;
    T sum = 0;

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            sum = sum + Arr[iCnt];
        }
    
    return sum;
}

template<class R>
R Maximum(R Arr[] , int iSize)
{
    int iCnt = 0;
    R max = Arr[0];

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            if(max < Arr[iCnt])
                {
                    max = Arr[iCnt];
                }
        }
    
    return max;
}




int main()
{
    int iData [] = {10,20,30,40};
    int iRet = 0;
    float fData [] = {10.23, 20.33, 30.51, 40.55};
    float fRet = 0.0;

    iRet = Addition(iData,4);
    cout<<"Addition is "<<iRet<<"\n";

    fRet = Addition(fData,4);
    cout<<"Addition is "<<fRet<<"\n";

    iRet = Maximum(iData,4);
    cout<<"Maximum is "<<iRet<<"\n";

    fRet = Maximum(fData,4);
    cout<<"Maximum is "<<fRet<<"\n";
    return 0;
}