#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
    int e=0;
    int s=n;
    while(e<=s){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            s=mid-1;
        }else{
            e=mid+1;
        }

    }return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binary_search(arr,n,key)<<endl;
}