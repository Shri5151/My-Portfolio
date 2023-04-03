#Display hello on the 4 times 

def Display(No):
    Cnt = 0
    if (Cnt < No):
        print("Hello")
        Cnt =Cnt + 1
        Display(No)  #this will generate error maximum numbers of recursin reached
Display(4)