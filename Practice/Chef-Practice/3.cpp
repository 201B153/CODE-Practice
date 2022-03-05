#include<bits/stdc++.h>
#include<iostream>
//#include <boost/multiprecesion/cpp_int.hpp>
//using namespace boost::multipreceson;
using namespace std;
 int main(){
     int tc;
     cin>>tc;
     while(tc--){
         int n;
         cin>>n;
         int count =1;
         for(int i=1;i<=n;i++)
         {
             count=count*i;
         }
         cout<<count<<endl;
     }
 }