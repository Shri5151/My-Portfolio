import time
import multiprocessing  

def DisplayEven(No):
    for i in range (1,No):
        if (i % 2 == 0):
            print("Even number ",i)


def DisplayOdd(No):
    for i in range(1,No):
        if (i % 2 != 0):
            print("Odd number: ",i)


def main():
    print("Demonstration of parallel programming using multiple processing")
    Number = 200000000
    p1 = multiprocessing.Process(target = DisplayEven,args = (Number,))    #keyword argument
    p2 = multiprocessing.Process(target = DisplayOdd,args = (Number,))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    print("End of main")

if __name__=="__main__":
    start_time = time.process_time()
    main()
    end_time = time.process_time()
    print("Execution time is :",end_time - start_time)