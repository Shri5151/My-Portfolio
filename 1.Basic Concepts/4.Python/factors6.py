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
#import Module_Factors as Fact

from Module_Factors  import *
from sys import *


def main():
    print("Application mame is : ",argv[0])

    DisplayFactors(int(argv[1]))
    print("Done!")    



if __name__=="__main__":
    main()
    

#Type this on terminal 
# python factors6.p (input)
# i.e. python factors.6 12