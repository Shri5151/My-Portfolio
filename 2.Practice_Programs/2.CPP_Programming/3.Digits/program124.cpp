// Accept number and return the frequency of each digit


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

        void DisplayFrequency()
            {
                int iTemp = iNo;
                int iDigit = 0;
                int Frequency[10] = {0};

                while(iTemp != 0)
                    {
                        iDigit = iTemp % 10;
                        Frequency[iDigit]++;
                        iTemp = iTemp / 10;
                    }
                
                for (int iCnt = 0 ; iCnt < 10 ; iCnt++)
                    {
                        if (Frequency[iCnt] > 0)
                            {
                                cout<<"Frequency of "<<iCnt<<" is : "<<Frequency[iCnt]<<"\n";
                            }
                    }

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

    Obj.DisplayFrequency();

    return 0;
}

















