#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
  cin>>t;
  while(t--){
       string s,a;
       a="CDN";
       int x,c=0,n=0,d=0,cr=0,ch=0;
      cin>>x;
      cin>>s;
      for(int i=0;i<14;i++){
          if(s[i]==a[0]){
              c++;
          }
          else if(s[i]==a[2]){
              n++;
          }
          else if(s[i]==a[1]){
              d++;
          }
      }
      //cout<<c<<n<<d;
      cr=2*c+d;
      ch=2*n+d;
      if(cr>ch){
          cout<<60*x<<endl;
      }
      else if(cr<ch){
          cout<<40*x<<endl;
      }
      else if(cr=ch){
          cout<<55*x<<endl;
      }

  }
  return 0;
} 
