// Accept number and return maximum frequency and corresponding  digit


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

        void DisplayMaxFrequency()
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
                int iMaxFreq = 0;
                int iMaxDigit = 0;                    
                
                for (int iCnt = 0 ; iCnt < 10 ; iCnt++)
                    {
                        if (Frequency[iCnt] > iMaxFreq)
                            {
                                iMaxFreq = Frequency[iCnt];
                                iMaxDigit = iCnt;
                            }
                    }

                cout<<"Maximum times occured digit is "<<iMaxDigit<<" and it frequency is "<<iMaxFreq<<"\n";
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

    Obj.DisplayMaxFrequency();

    return 0;
}

















