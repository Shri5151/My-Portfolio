
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
        void Function ()
            {
                // Logic
            }
};

//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////

int main ()
{
    int iNo1 = 0, iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iNo1;

    Numbers obj(iNo1);

    iRet = obj.Function();

    cout<<"Output is "<<iRet <<"\n";
    return 0;
}




















