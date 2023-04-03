#include<iostream>
using namespace std;

template<class T>

T Addition(T i , T j)
{
    T iAns ;
    iAns = i + j;

    return iAns;
}


int main()
{
    double dA = 11.9, dB = 10.1, dRet = 0;
    dRet = Addition(dA,dB);

    cout<<"Addition is :"<<dRet<<"\n";
    
    int iA = 11, iB = 10, iRet = 0;
    iRet = Addition(iA,iB);

    cout<<"Addition is :"<<iRet<<"\n";

    return 0;
}