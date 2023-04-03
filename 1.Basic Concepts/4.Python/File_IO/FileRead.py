import os

def Read_File(FileName):
    if (os.path.exists(FileName)):
        fd = open(FileName,"r")
        Data = fd.read()
        print("Data from file is : ")
        print(Data)
 
    else:
        print("File does not exist !")
        return


def main ():
    
    Name = input("Enter the file name you want to read :")

    Read_File(Name)




if __name__ == "__main__":
    main()