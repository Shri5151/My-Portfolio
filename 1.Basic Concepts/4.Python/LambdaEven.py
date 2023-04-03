

def CheckEvenX(No):
    return (No%2==0)

LAMBDAFUNCTION = lambda No:No %2==0

Ret =LAMBDAFUNCTION(12)
print("LAMDA")

if(Ret==True):
    print("Even")

else:
    print("Odd")