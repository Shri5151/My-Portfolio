class Numbers:
    def __init__(self):
        self.Size = 0
        self.Arr = list()
        self.Accept()
           
    def Accept (self):
        print ("Enter how many elements you want to store : ")
        self.Size = int (input())

        print("Please Enter the elements")
        Value = 0
        for i in range (0,self.Size):
            Value = int(input())
            self.Arr.append(Value)

    def Display(self):
        print("Elements from list are :")
        for i in range (0,self.Size):
            print(self.Arr[i])

    def Sumation(self):
        Sum = 0 
        for i in range(0,self.Size):
            Sum = Sum + self.Arr[i]
        return Sum
   
    def Average(self):
        Sum = 0 
        for i in range(0,self.Size):
            Sum = Sum + self.Arr[i]
        return (Sum/self.Size)

    def Maximum(self):
        Max = self.Arr[0]
        for i  in range (0,self.Size):
            if (self.Arr[i]>Max):
                Max = self.Arr[i]

        return Max

    def Minimum(self):
        Min = self.Arr[0]
        for i  in range (0,self.Size):
            if (self.Arr[i]<Min):
                Min = self.Arr[i]

        return Min


def main():
    obj = Numbers()
    obj.Display()

    Ret = obj.Sumation()
    print("Summation is :",Ret)

    Ret = obj.Average()
    print("Average is :",Ret)
    
    Ret = obj.Maximum()
    print("Maximum is :",Ret)

    Ret = obj.Minimum()
    print("Minimum is :",Ret)

    
if __name__ == "__main__":
    main()