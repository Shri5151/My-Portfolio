from functools import reduce

def main():
    print("Enter number of elements you want to enter: ")
    iSize = int(input())

    Data_Input = []

    print("Please enter the data")

    for iCnt in range(0,iSize,1):
        Value=int (input())
        Data_Input.append(Value)

    Data_Reduce = reduce(lambda A,B :A+B,list(map(lambda No: No*2,list(filter(lambda No:(No%2==0),Data_Input)))))
    print("Result after Reduce is (FINAL DATA) :",Data_Reduce)

if __name__=="__main__":
    main()