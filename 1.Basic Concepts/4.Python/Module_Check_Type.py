def Check_Type_FI(i,j):
    No1=int(i)
    No2=int(j)
    
    if (i-No1>0) or (j-No2>0):
        return float(i),float(j)
    else:
        return int(i),int(j)