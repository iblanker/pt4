
from pt4 import *
import math

def IsPrime(N):
    if N<=3:
        Flagx=True
    else:
        for i in range (2,int(math.sqrt(N))+1):
            if N%i!=0:
                Flagx=True
            else:
                Flagx=False
                break
    return Flagx

def solve():
    task("ZFunc13")
    a=[get() for i in range(10)]
    #show_line
    #show(a)
    counter=0
    for k in range (10):
        n=a[k]
        if IsPrime(n)==True:
            counter+=1
        #show(counter)
    put(counter)
    return 0










start(solve)
