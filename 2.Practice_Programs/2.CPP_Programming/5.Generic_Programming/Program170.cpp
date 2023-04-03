#include<iostream>
using namespace std;


template<class T>

// call by refference
void Swap_T(T &x , T &y)
{
    T temp ;
    temp = x ; 
    x = y;
    y = temp;
}




int main()
{
    int iA = 11 , iB = 10;
    double dA = 11.2365 , dB = 10.12354787;

    cout<<"Value of a : "<<iA<<"\n";
    cout<<"Value of b : "<<iB<<"\n\n";  

    Swap_T(iA,iB);   //call by refference

    cout<<"Value of a : "<<iA<<"\n";
    cout<<"Value of b : "<<iB<<"\n\n"; 

    cout<<"Value of a : "<<dA<<"\n";
    cout<<"Value of b : "<<dB<<"\n\n";  

    Swap_T(dA,dB);   //call by refference

    cout<<"Value of a : "<<dA<<"\n";
    cout<<"Value of b : "<<dB<<"\n\n";  


    return 0;
}