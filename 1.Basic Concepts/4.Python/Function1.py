#Accepts nothing returns nothing
def Demo1():
    print("Inside Demo1")

#One Parameter return nothing
def Demo2(No):
    print("Inside Demo2 with argument :",No)

#Accepts one parameter return oneparameter
def Demo3(No):
    print("Inside Demo3 with argument",No)
    return No+2

#accepts two parameters return one parameter
def Demo4(No1,No2):
    print("Inside Demo4")
    Add=No1+No2
    return Add

#accepts two parameters return two parameter
def Demo5(No1,No2):
    print("Inside Demo5")
    Add= No1+No2
    Sub=No1-No2
    return Add,Sub

def main():
    Demo1()
    Demo2("hello")
    Ans=Demo3(10)
    print ("Return value of Demo3:",Ans)
    Ans=Demo4(10,11)
    print("Return Value of Demo4 is : ",Ans)
    Ans1,Ans2 = Demo5(11,10)
    print("First return value : ",Ans1)
    print("First return value : ",Ans2)


if __name__=="__main__":
    main()