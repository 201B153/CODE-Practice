#include<iostream>
using namespace std;
/*
int main()
{
    int T;
    cin>>T;
    while(T--){
        long long int A,B,C;
        cin>>A >>B >>C;
        if(A>B && A>C){
            if(B>C)
            cout<<B<<endl;
            else if(C>B)
            cout<<C<<endl;
        }
        else if(B>A && B>C ){
            if(A>C)
            cout<<A<<endl;
            else if(C>A)
            cout<<C<<endl;
        }
        else if(C>A && C>B ){
            if(A>B)
            cout<<A<<endl;
            else if(B>A)
            cout<<B<<endl;
        }    
    }
    return 0;
}
*/
/*int main(){
    int N,A,B,W,max=0,temp,Si=0,Ti=0,L;
    cin>>N;
    while(N--){
        cin>>A>>B;
        Si=Si+A;
        Ti=Ti+B;
        if(Si>Ti){
            L=Si-Ti;
            temp=1;   
        }
        else{
            L=Ti-Si;
            temp=2;
        }
        if(L>max){
            max=L;
            W=temp;
        }
    }
    cout<<W<<" "<<max;
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull n;
ull a[105], dp[105][105], dir[105];

ull call(ull k, ull cnt){
    if(dp[k][cnt]!=-1)
        return dp[k][cnt];

    if(cnt==n)
        return 1;

    ull maxi=0;

    for(ull i=0;i<n;i++){
        if((a[i]*3==a[k]) || (a[k]*2==a[i]) ){

            int tmp= call(i,cnt+1);

            if(tmp>maxi){
                maxi=tmp;
                dir[k]= i;
            }

        }
    }



    return dp[k][cnt]= maxi;


}

void solution(ull start){
    if(dir[start]==-1)
        return;

    cout<<" "<<a[dir[start]];
    solution(dir[start]);

}

main(){
    ull fl, start;
    cin>>n;
    memset(dp, -1, sizeof dp);
    memset(dir, -1, sizeof dir);
    for(ull i=0;i<n;i++)
        cin>>a[i];

    for(ull i=0;i<n;i++){
        fl=call(i, 1);
        if(fl==1){
            start=i;
            break;
        }
    }

    cout<<a[start];
    solution(start);

    puts("");

}
 */
