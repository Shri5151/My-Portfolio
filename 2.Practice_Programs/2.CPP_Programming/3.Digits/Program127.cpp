#include<iostream>
using namespace std;

bool CheckAnagram(int iNo1, int iNo2)
{
    int Frequency[10] ={0};
    bool flag = true;
    while((iNo1 != 0)||(iNo2 != 0))
        {
            Frequency[(iNo1 % 10)]++;
            Frequency[(iNo2 % 10)]--;

            iNo1 = iNo1 / 10;
            iNo2 = iNo2 /10;
        }


    for (int iCnt = 0 ; iCnt < 10 ; iCnt++)
        {
            if(Frequency[iCnt] > 0)
                {
                    flag = false;
                    break;
                }
            
        }
    return flag;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;

    bRet = CheckAnagram(iValue1,iValue2);

    if(bRet == true)
    {
        cout<<"Numbers are anagram"<<"\n";
    }
    else
    {
        cout<<"Numbers are not anagram"<<"\n";
    }
    return 0;
}