#include<iostream>
using namespace std;

double Addition(double i , double j)
{
    double iAns = 0;
    iAns = i + j;

    return iAns;
}


int main()
{
    double a = 11, b = 10, ret = 0;
    ret = Addition(a,b);

    cout<<"Addition is :"<<ret<<"\n";

    return 0;
}