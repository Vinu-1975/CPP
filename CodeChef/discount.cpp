#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double q,p,d,c,e;
	    cin>>q>>p;
	    if(q>1000){
	       d=(p*q)/10;
           c=(p*q)-d;
           cout<<fixed<<setprecision(6)<<c<<endl;
	    }else{
            e=p*q;
            cout<<fixed<<setprecision(6)<<e<<endl;      
	    }
	}
	return 0;
}