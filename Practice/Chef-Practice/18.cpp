#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,a[n];
        cin>>n >>x;
        for(int i=0;i>=n;i++){
            cin>>a[i];
        for(const int &z : a){
            if(a[z]>=0){
                x=x+a[z];
            }
            else{
                x=x=a[z];
            }
        }    
        }
    }
    return 0;
}