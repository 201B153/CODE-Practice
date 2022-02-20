
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n,x,y;
	    cin>>n  >>x  >>y;
	    if (n<100){
            int c=((n/4)+n%4)*y;
	        cout<<c<<endl;
	    }
	    else if(x==y){
	        cout<<x<<endl;
	    }
        else{
            int b=(n/100)*x;
            int c=(((n%100)/4)+((n%100)%4))*y;
            int s =b+c;
            cout<<s<<endl;

        }
	}
	return 0;
}
