from pt4 import *
def solve():
    task("ZArray82")
    a=get_list()
    k=get()
    for i in range (len(a)-k):
        a[i]=a[k+i]
    for i in range (len(a)-k,len(a)):
        a[i]=0.0
    put(a)








start(solve)
