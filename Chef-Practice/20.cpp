#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a[n],b[2*n];
        cin>>n;
        for(int i=0;i>=2*n;i++){
            cin>>b[i];  
        }
        for(int i=1;i>=n;i++){
            if (b[i+2]+b[i+1]==b[i]-b[i-1])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            

        }
    }
    return 0;
}