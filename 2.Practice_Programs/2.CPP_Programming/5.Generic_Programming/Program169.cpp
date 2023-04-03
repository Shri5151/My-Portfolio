#include<iostream>
using namespace std;



// call by refference
void Swap_i(int &x , int &y)
{
    int temp ;
    temp = x ; 
    x = y;
    y = temp;
}

// call by refference
void Swap_d(double &x , double &y)
{
    double temp ;
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

    Swap_i(iA,iB);   //call by refference

    cout<<"Value of a : "<<iA<<"\n";
    cout<<"Value of b : "<<iB<<"\n\n"; 

    cout<<"Value of a : "<<dA<<"\n";
    cout<<"Value of b : "<<dB<<"\n\n";  

    Swap_d(dA,dB);   //call by refference

    cout<<"Value of a : "<<dA<<"\n";
    cout<<"Value of b : "<<dB<<"\n\n";  


    return 0;
}