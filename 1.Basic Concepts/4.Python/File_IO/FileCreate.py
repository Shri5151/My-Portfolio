import os

def CreateFile (FileName):
    if (os.path.exists(FileName)):
        
        print("File Already exists")
        return 

    else:
        fd = open (FileName,"w")
        print("File is created!!")


def main ():
    print("Enter the file name you want to create")
    Name = input()

    CreateFile (Name)




if __name__ == "__main__":
    main()