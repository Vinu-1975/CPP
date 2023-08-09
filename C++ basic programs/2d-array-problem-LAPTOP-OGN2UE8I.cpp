#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<n;j++) {
    //         if(a[i][j]==1){
    //             for(int k=0;k<n;k++){
    //                 a[i][k]=1;
    //             }
                
    //         }
    //     }
    // }
    int col[n],rows[n];
    int temp =0;
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                rows[temp] =i;
                
                temp++;
            } 
            
        }
    }
    temp =0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                col[temp] = j;

                temp++;
            }
        }
    }
    temp =0;
    
    for(int k=0;k<n;k++){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == rows[k])
                {
                    a[i][j] = 1;
                }
                if(j == col[k]){
                    a[i][j]=1;
                }
            }
        }
    }
    

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}