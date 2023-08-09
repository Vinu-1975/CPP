#include<iostream>
using namespace std;

void show(int [],int);

int main(){
    int numbers[] {9,8,7,5,4,3,2};
    int length=7;

    show(numbers,length);
    
    return 0;
}

void show(int numbers[],int length){
    for(int i=0;i<length;i++){
        cout<<numbers[i]<<endl;
    }
}