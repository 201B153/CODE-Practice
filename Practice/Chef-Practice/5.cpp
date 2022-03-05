#include<iostream>
using namespace std;
#define int long long int
int32_t main()
{
 string s[14];int x,c,n,d,cr,ch;
     // cin>>x;
      for(int i=0;i<4;i++){
          cin>>s[i];
      }
      for(const string &n : s){
          cout<<n<<" ";
          if(n=="c"){
              c++;
             // cout<<"win";
          }
        /*  else if(s[n]=="n"){
              n+=1;
              //cout<<"loss";
          }
          else if(s[n]=="d"){
              d+=1;
             // cout<<"draw";
          }
          else{
              cout<<"wrong input";
          }*/
      }
      cout<<c;
  return 0;
} 
