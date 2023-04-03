print("Demonstration of touple")
#Data : Heterogeneous
#Ordered : Yes
#Indexed : Yes
#Mutable : No
#Duplicates : Yes


data = (11,21,51,101,21,11)     #duplicates

data1=(11,90.80,True,"Hello")       #heterogeneous

print("Output using for")
for no in data1:
    print(no,end=" ") 
print()

print("output usinf for")
for i in range (0,len(data1),1):
    print(data[i],end=" ") 
print()

print("output using while")
i =0
while (i<len(data1)):
    print(data[i],end=" ") 
    i+=1
print()
