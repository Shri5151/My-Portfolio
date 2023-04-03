
///////////////////////////////////////////////////////////
// header files ,keywords ,drectives
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////
class Arithematic
{
    public:
    int iNo1;
    int iNo2;
    Arithematic()
        {
            iNo1 = 0;
            iNo2 = 0;
        }

    Arithematic(int iValue1 = 0,int iValue2 = 0)
        {
            iNo1 = iValue1;
            iNo2 = iValue2;
        }

    int Addition ()
        {
            int iAdd = 0;

            iAdd =this->iNo1  + this->iNo2;

            return iAdd;
        }
};
//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////

int main ()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;

    cout<<"Enter first number : \n";
    cin>>iNo1;

    cout<<"Enter second number : \n";
    cin>>iNo2;

    Arithematic obj(iNo1,iNo2);

    iAns = obj.Addition();

    cout<<"Addition is  : "<<iAns<<"\n";
    
    return 0;
}




















