
def Demo():
    print("Inside Demo")

def Fun():
    print("Inside Fun")

def Hello (FPTR):           #Reference,helper function,positional argument,naked prototypiong,
    print("Inside hello")
    FPTR()
    
    

Hello(Demo)
Hello(Fun)