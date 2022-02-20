T= int(input())
for _ in range(T):
    n,x,y=map(int,input().split())
    if x>y and n<100:
        c=round(n/4)+n%4
        print(y*c)
    elif x==y and n<100:
        print(x)
        
    elif n>100:
        bs=round(n/100)*x
        cs=(round((n%100)/4)+(round(n%100)%4))*y
        print(bs+cs) 
               