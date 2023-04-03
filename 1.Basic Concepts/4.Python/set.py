

print("Demonstration of set")
#Data : Heterogeneous
#Ordered : NO
#Indexed : NO
#Mutable : Yes
#Duplicates : NO


data = {11,21,51,101,21,11}     #duplicates

data1={11,90.80,True,"Hello" }      #heterogeneous

print("Data is Heterogeneous : ",data1)
print("Data is ordered : ",data1)
#print("Data at index 2:",data1[2])
print("Data with Duplicate elements :",data)

#print("list is mutable")
#data.append(201)
#print("Data after append",data)
#data.pop()
#print("Data after pop",data)
data.add(200)
print ("aftert adding",data)
data.remove(200)
print ("aftert removing",data)
data.discard(201)
print("After discard")