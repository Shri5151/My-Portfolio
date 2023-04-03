class Bank_Account:
    Bank_Name = "HDFC Bank PVT LTD"
    ROI_On_FD = 6.7

    def __init__(self):
        self.Name =""
        self.Amount= 0
        self.Address = ""
        self.AccountNo=0
    
    def CreateAccount(self):
        print("Enter your Name:")
        self.Name = input()

        print("Enter your initial amount:")
        self.Amount = int(input())

        print("Enter your Address:")
        self.Address = input()

        print("Enter your Account number")
        self.AccountNo = int(input())

    def DisplayAccountInfo(self):

        print("--------Your Account information is as below-----")
        print("Name of Account Holder:",self.Name)
        print("Account Number:",self.AccountNo)
        print("Address of Account Holder:",self.Address)
        print("Current Amount in Acount:",self.Amount)
        print()

    @classmethod
    def DisplayBankInformation(cls):
        print("Welcome to Banking console")
        #print("Name of bank :",cls.Bank_Name)
        print("Rate of Intrest we offer on fixed deposite is:",cls.ROI_On_FD)
        print()

    @staticmethod
    def DisplayKYCInfo():
        print("Please Consider below KYC information")
        print("According to Rules of Government of India you have to subvmit below documents")
        print("1 : Clear and recent passport size photo")
        print("2 : Photo of Aadhar Card")
        print("3 : Photo of PAN Card")
        print()

        
def main():
    Bank_Account.DisplayKYCInfo()

    print(Bank_Account.Bank_Name)
    
    Bank_Account.DisplayBankInformation()

    User1 = Bank_Account()
    User2 = Bank_Account()
    
    print("Creating the first Account")
    User1.CreateAccount()
    print("Creating the Second Account")
    User2.CreateAccount()

    print("Information of First account")
    User1.DisplayAccountInfo()
    print("Information of Second account")
    User2.DisplayAccountInfo()

    User1.
    User2.




if __name__=="__main__":
    main()