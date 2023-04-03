def Outer():#100
    print("Inside Outer")
    print("id of outer function",id(Outer))
    def Inner():#200
        print("Inside Inner")
    print("id of inner from Outer",id(Inner))
    return Inner #return 200
    #Returning Function from another function
    #returning function as return value


ret = Outer()  #ret = 100()
print(type(ret))
print("ID of ret",id(ret))
ret()  #200()