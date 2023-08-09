#include <bits/stdc++.h>
using namespace std;

int gcd(int ,int );
int ga(int [],int );

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int c=ga(a,n);
		for(int i=0;i<n;i++){
			cout<<a[i]/c<<" ";
		}
		cout<<endl;
	}
	return 0;
}

int gcd(int a,int b){
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}

int ga(int a[],int n){
	int temp=a[0];
	for(int i=0;i<n;i++){
		temp=gcd(temp,a[i]);
	}
	return temp;
}