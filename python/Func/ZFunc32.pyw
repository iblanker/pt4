from pt4 import *

def Minmax(X,I,J):
    XI=X[I]
    XJ=X[J]
    if XI>XJ:
        X[I]=XJ
        X[J]=XI
    

def solve():
    task("ZFunc32")
    a,b,c,d=get4()
    x=[a,b,c,d]
    Minmax(x,0,1)   #(if) min=x0=a  max=x1=b -> a<b
    Minmax(x,2,3)   #(if) min=x2=c  max=x3=d -> c<d
    Minmax(x,0,2)   #(if) mix=x2=c  max=x0=a -> c<a -> c<a<b&&c<d   Q:a?d  b?d
    Minmax(x,1,3)   #(if) mix=x3=d  max=x1=b -> d<b -> c<d<a<b//c<a<d<b
    put(x[0],x[3])







start(solve)
