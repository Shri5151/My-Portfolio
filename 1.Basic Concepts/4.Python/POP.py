def Add(A,B):
    return A+B

def Sub(A,B):
    return A-B

def main():
    print("Enter first number")
    No1 =int(input())     

    print("Enter Second number")
    No2=int(input())

    Ans = Add(No1,No2)
    print("Addition",Ans)

    Ans = Sub(No1,No2)
    print("Substraction",Ans)




if __name__=="__main__":
    main()