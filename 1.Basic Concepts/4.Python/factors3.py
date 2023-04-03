###################################################
#
#  Application Name : determine factors of Given Number
#  Input : 12    
#  Output : factors(1 2 3 4 6)   
#  Author : Shrinivas Sukumar Joshi
#  Date : 8 oct 22     
#
##################################################

#import Module_Factors
#from Module_Factors  import DisplayFactors
#from Module_Factors  import *
import Module_Factors as Factor
def main():
    print ("Enter number :")
    No = int (input())

    Factor.DisplayFactors(No)
        



if __name__=="__main__":
    main()
    