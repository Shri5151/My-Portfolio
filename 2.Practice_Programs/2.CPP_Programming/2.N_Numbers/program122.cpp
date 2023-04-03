// Accept N number feom user and return addition of even elements


///////////////////////////////////////////////////////////
// header files ,keywords ,drectives
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////
//Bussiness logic function
////////// ////////////////////////////////////////////////

class ArrayX 
{
    public:
        int * Arr;
        int iSize;


        ArrayX(int i)
            {
                cout<<"Allocating the memory for resources....\n";
                iSize = i;
                Arr = new int [iSize];
            }

        ~ArrayX()
            {
                cout<<"Deallocating the memory for resources....\n";
                delete[]Arr;
            }

        void Accept()
            {
                cout<<"Enter the elements of array :"<<"\n";
                for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
                    {
                        cin>>Arr[iCnt];                    
                    }
            }

        void Display()
            {
                cout<<"Enter the elements of array :"<<"\n";
                for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
                    {
                        cout<<Arr[iCnt]<<"\t";                    
                    }
                cout<<"\n";
            }
        
 

};

class MarvellousLB : public ArrayX
{
    public:

        MarvellousLB(int i) : ArrayX(i)  //Base member initialisation
            {}
        int Minimum()
            {
                int iMin =Arr[0];
                for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
                    {
                        if (Arr[iCnt] < iMin)
                            {
                                iMin = Arr[iCnt];
                            }
                    }
                return iMin;
            }
};

//////////////////////////////////////////////////////////
//Entry point function 
//////////////////////////////////////////////////////////

int main()
{
    int iLenght = 0;
    int iRet = 0;

    cout<<"Enter The number of elements : ";
    cin>>iLenght;

    MarvellousLB * Obj = new MarvellousLB(iLenght);

    Obj->Accept();
    Obj->Display();

    iRet = Obj->Minimum();
    cout<<"Smallest number is "<<iRet<<"\n";

    delete Obj; 

    return 0;
}

















