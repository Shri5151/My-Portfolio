

print("Demonstration of list")
#Data : Heterogeneous
#Ordered : Y
#Indexed : Y
#Mutable : Y
#Duplicates : Y


data = [11,21,51,101,21,11]     #duplicates

data1=[11,90.80,True,"Hello"]       #heterogeneous

print("Data is Heterogeneous : ",data1)
print("Data is ordered : ",data1)
print("Data at index 2:",data1[2])
print("Data with Duplicate elements :",data)

print("list is mutable")
data.append(201)
print("Data after append",data)
data.pop()
print("Data after pop",data)