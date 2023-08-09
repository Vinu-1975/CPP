#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"enter no. of rows and colums";
    cin>>m>>n;
    cout<<"enter elements of matrix 1;\n";
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter elements of matrix 2;\n";
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    int tot=0;
    int c[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                tot=a[i][j]+b[j][k];
            }
        c[i][j]=tot;
        tot=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j];
        }
    }cout<<endl;
}