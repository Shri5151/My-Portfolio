print("demonstration of list functions ")
data= [11,21,51,101]

print("Output using for")
for no in data:
    print(no,end=" ")
print()

print("Output using for with index")
for i in range (0,len(data),1):
    print(data[i],end=" ")
print()


print("Output using while with index")
i=0
while (i<len(data)):
    print(data[i],end=" ")
    i+=1        #i=i+1
print()