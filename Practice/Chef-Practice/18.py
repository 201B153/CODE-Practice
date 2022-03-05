T= int(input())
for _ in range(T):
    L = []
    N,X=map(int,input().split())
    L = list(map(int,input().strip().split(' ')))[:N]
    #print(L)
    for i in range(N):
        if L[i]>=0:
            X=X+L[i]
        elif L[i]<0:
            X=X+(L[i])    
    #total=0
    #for e in range(0, len(L)):
        #total=total+L[e]
    print(X)    
 