T= int(input())
for _ in range(T):
    L = []
    N = int(input())
    L = list(map(int,input().strip().split(' ')))[:N]
    #print("The entered list is: \n",L)
    total=0
    for e in range(0, len(L)):
        total=total+L[e]
    #print(total)
    if total%3==0:
        print(1)
    else:
        print(0)        
    

"""
n = int(input())
l = list(map(int, input().split()))
def conv(n):
    i = 0
    while n % 2 == 0:
        i += 1
        n /= 2
    return (-n, i)
 
l.sort(key=conv)
print(*l)
 """