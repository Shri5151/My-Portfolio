def Add (A,B):
    return A+B

def Sub(A,B):
    return A-B

def CalCulator(Target,Value1,Value2):
    return Target(Value1,Value2)

#helperfuction ,positional arguments
Ret = CalCulator(Target = Add,Value1 = 10,Value2 = 11)
print("Addition : ",Ret)

Ret = CalCulator(Target = Sub,Value1 = 10,Value2 = 11)
print("Substraction : ",Ret)