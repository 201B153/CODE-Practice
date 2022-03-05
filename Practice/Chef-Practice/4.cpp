#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int T;
    scanf("%T",&T);
    while (T--)
    {
        int A,B,X,Y;
        scanf("%A %B %X %Y",&A,&B,&X,&Y);
        if(A*B<=X*Y){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    
}