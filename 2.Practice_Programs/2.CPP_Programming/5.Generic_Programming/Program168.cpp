#include<iostream>
using namespace std;

// call by value
/*
void Swap(int x , int y)
{
    int temp ;
    temp = x ; 
    x = y;
    y = temp;
}
*/

// call by address
void Swap(int* x , int* y)
{
    int temp ;
    temp = *x ; 
    *x = *y;
    *y = temp;
}

// call by refference
void Swap(int &x , int &y)
{
    int temp ;
    temp = x ; 
    x = y;
    y = temp;
}


int main()
{
    int a = 11 , b = 10;

    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n\n";
    

    // Swap(a,b);    call by value

    Swap(&a,&b);   //call by address

    // Swap(a,b);   //call by refference

    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";


    return 0;
}