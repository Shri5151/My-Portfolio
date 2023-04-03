#Display hello on the 4 times 

def Display(No):
    
    if (No > 0):
        print("Hello")
        No = No - 1
        Display(No)# recursive Function Call  
        
        
        
Display(4)# Function call