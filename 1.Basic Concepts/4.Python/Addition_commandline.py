from sys import*
import Module_Addition


#print ("Application to demonstrate industrial programming")


def main():
    if((len(argv)) != 3):
        print("Invalid Number of Arguments")
        exit()
           
    
    sum =Module_Addition.Addition(int(argv[1]),int(argv[2]))
    

    print("Addition is :",sum)    

if __name__=="__main__":
    main()
