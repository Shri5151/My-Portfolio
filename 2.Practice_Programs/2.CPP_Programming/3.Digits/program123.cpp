// Accept number and return sum of even digits


///////////////////////////////////////////////////////////
// header files ,keywords ,drectives
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//Bussiness logic function
//////////////////////////////////////////////////////////
class DigitX
{
    public:
        int iNo;

        DigitX()
            {
                iNo = 0;
            }
        DigitX(int i)
            {
                iNo = i;
            }

        int SumEvenDigits()
            {
                int Num = iNo;
                int iSum = 0;
                int iDigit = 0;

                while (Num != 0)
                    {
                        iDigit = Num % 10;
                        if (iDigit % 2 == 0)
                            {
                                iSum = iSum + iDigit;
                            }
                        Num = Num / 10;
                    }

                return iSum;
            }
        
};

//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"please enter the number : "<<"\n";
    cin>>iValue;

    DigitX Obj(iValue);

    iRet = Obj.SumEvenDigits();

    cout<<"Sum of Even Digits is :"<<iRet<<"\n"; 
    return 0;
}

















