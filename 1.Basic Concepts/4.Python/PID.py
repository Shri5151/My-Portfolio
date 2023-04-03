import os 
def main():
    print("PID Current : ",os.getpid())
    print("PID Parent : ",os.getppid())

if __name__=="__main__":
    main()
    