def Display(No):
    if(No > 0):
        No = No - 1
        Display(No)  #HEAD RECURSIVE FUNCTION CALL
        print(No)

Display(4)
