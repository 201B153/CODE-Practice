#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
  cin>>t;
  while(t--){
       string s,a;
       a="cdn";
       int x,c=0,n=0,d=0,cr=0,ch=0;
      cin>>x;
      cin>>s;
      for(int i=0;i<14;i++){
          if(s[i]==a[0]){
              c+=2;
          }
          else if(s[i]==a[2]){
              n+=2;
          }
          else if(s[i]==a[1]){
              d+=1;
          }
      }
      cr=c+d;
      ch=n+d;
      if(cr>ch){
          cout<<60*x;
      }
      else if(c<n){
          cout<<40*x;
      }
      else{
          cout<<55*x;
      }

  }
  return 0;
} 
