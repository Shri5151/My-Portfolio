import os

def Write_File(FileName):
    if (os.path.exists(FileName)):
        print("Enter The data that you want to create")
        Data = input()
        fd = open(FileName,"a")
        fd.write(Data)
        print("Data is written inside the file")
 
    else:
        print("File does not exist !")
        return


def main ():
    print("Enter the file name you want to create")
    Name = input()

    Write_File(Name)




if __name__ == "__main__":
    main()