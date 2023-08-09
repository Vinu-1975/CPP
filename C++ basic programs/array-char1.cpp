#include<bits/stdc++.h>
using namespace std;

/**int main(){
    char arr[100];
    cin>>arr;

    cout<<arr<<endl<<arr[1];

}**/
int main(){
    int arr[4]={1,2,3,4};
    int *ar[4];
    ar[4]=arr[4];
    for(int i=0;i<4;i++){
        cout<<*ar[4]<<endl;
    }
}