/*
--> repetedly swap two adjacent elements if they are in wrong order
--> (here the largest element will get ordered in the last place)
--> we have to do  (n-1) iterations before we get our sorted array
--> for 1st iteration - we ll check till n-1
    for 2st iteration - we ll check till n-2
    for 3st iteration - we ll check till n-3 and so on
    for i-th iteration - we ll check till n-i 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}