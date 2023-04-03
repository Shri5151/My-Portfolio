// Determine factorial of number


///////////////////////////////////////////////////////////
// header files ,keywords ,drectives
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////
//Bussiness logic function
////////// ////////////////////////////////////////////////

class Numbers 
{
    public:
        int iNo;

        Numbers(int i)
            {
                iNo = i;
            }
        int Factorial ()
            {
                int iFact = 1;
                int iCnt = 0;

                for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
                    {
                        iFact = iFact *iCnt;
                    }                

                return iFact;
            }
};

//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    Numbers obj(iValue);

    iRet = obj.Factorial();

    cout<<"Factorial is "<<iRet <<"\n";
    
    return 0;
}




















