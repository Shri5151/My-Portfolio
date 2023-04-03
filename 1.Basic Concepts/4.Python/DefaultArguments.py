def Area(Radius,PI=3.14):
    Result=PI* Radius* Radius
    return Result


def main():
    RValue=10.5
    PIValue=3.14
#positional 
    Ans= Area(RValue,PIValue) #Ans = Area(10.5,3.14)
    print("Area of circle is : ",Ans)

#keyword
    Ans= Area(Radius=RValue,PI=PIValue)  #Ans = Area(10.5,3.14)
    print("Area of circle is : ",Ans)

#positional with default
    Ans= Area(10.5)   #Ans = Area(10.5)
    print("Area of circle is : ",Ans)

#keyword with default(second value)
    Ans= Area(Radius = 10.5)#Ans = Area(10.5,3.14)
    print("Area of circle is : ",Ans)
    
#keyword 
    Ans= Area(PI=7.10,Radius=10.5)#Ans = Area(10.5,3.14)
    print("Area of circle is : ",Ans)


if __name__=="__main__":
    main()
    