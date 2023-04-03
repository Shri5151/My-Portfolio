


Batches = {"PPA":18000,"LB":16700,"Python":16500,"Angular":15000}

print("Data of Dictoonary :",Batches)
print("_________________________________________")
print("Data traversal using for loop")

for x in Batches:
    print(x)
    
print("_________________________________________")

print("Data traversal using for loop")
for x in Batches:
    print(x,Batches[x])
print("_________________________________________")

print("Data traversal using for loop")
for x in Batches:
    print(x,Batches.get(x))
print("_________________________________________")

keysBatches=Batches.keys()
ValuesBatches=Batches.values()

print(type(keysBatches))
print(type(ValuesBatches))


print(keysBatches)
print(ValuesBatches)

for i in range (0,len(Batches),1):
    print("Batch name is:",keysBatches[i],end= " ")
    print("Fees are :",ValuesBatches[i])
