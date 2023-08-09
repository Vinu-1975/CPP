#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    /*switch (n) {
        case 1:
            cout<<"one"<<endl;
            break;
        case 2:
            cout<<"two"<<endl;
            break;
        case 3:
            cout<<"three";
            break;
        case 4:
            cout<<"four";
            break;
        case 5:
            cout<<"five";
            break;
        case 6:
            cout<<"six";
            break;
        case 7:
            cout<<"seven";
            break;
        case 8:
            cout<<"eight";
            break;
        case 9:
            cout<<"nine";
            break;
    default:
        cout<<"greater than nine";
        break;
    }*/
    string r[10]={"Greater than nine","one","two","three","four","five","six","seven","eight","nine"};  
    if(n>9){
        cout<<r[0];
    }else{
        cout<<r[n];
    }
    return 0;
    
}
