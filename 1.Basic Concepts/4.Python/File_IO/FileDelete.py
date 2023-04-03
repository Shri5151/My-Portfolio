import os

def Delete_File(FileName):
    if (os.path.exists(FileName)):
        os.remove(FileName)


    else:
        print("File does not exist !")
        return


def main ():
    
    Name = input("Enter the file name you want to read :")

    Delete_File(Name)





if __name__ == "__main__":
    main()