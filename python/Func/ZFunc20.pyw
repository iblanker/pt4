from pt4 import *

def Fact2(N):
    if N-2>0:
        return Fact2(N-2)*N
    elif N==2:
        return 2
    else:   return 1

def solve():
    task("ZFunc20")
    a,b,c,d,e=get5()
    #show_line
    #show(a,b,d,d,e)
    A=float(Fact2(a))
    B=float(Fact2(b))
    C=float(Fact2(c))
    D=float(Fact2(d))
    E=float(Fact2(e))
    
    put(A)
    put(B)
    put(C)
    put(D)
    put(E)
    return 0












start(solve)
