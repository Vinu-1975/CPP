#include<bits/stdc++.h>
using namespace std;
//applica le only for 2x2 3x3 4x4......NxN matrices
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix is:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<"\n";
    }
    cout<<"Transpose of the above matrix is:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
}