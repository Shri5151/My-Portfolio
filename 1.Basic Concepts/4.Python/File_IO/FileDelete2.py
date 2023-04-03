import os

def Delete_File(FileName):
    if (os.path.exists(FileName)):
        size = os.path.getsize(FileName)
        if (size == 0):
            os.remove(FileName)
            print("File is Deleted successfully")
        else:
            print("Are you sure you want to delete the filr? Y/N")
            option = input()
            if(option == "Y" or option == "y"):
                os.remove(FileName)
                print("File is Deleted successfully")

            else:
                print("File deletion process is stopped ")


    else:
        print("File does not exist !")
        return


def main ():
    
    Name = input("Enter the file name you want to read :")

    Delete_File(Name)





if __name__ == "__main__":
    main()