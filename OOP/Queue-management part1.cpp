#include<iostream>
using namespace std;

class Queue{
    int size;
    int* queue;
    public:
    Queue(){
        size=0;
        queue=new int[100];
    }
    void remove(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return;
        }else{
            for(int i=0;i<size-1;i++){
                queue[i]=queue[i+1];
            }
            size--;
        }
    }
    void print(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return;
        }for(int i=0;i<size;i++){
            cout<<queue[i]<<" <- ";
        }
        cout<<endl;
    }
    void add(int x){
        queue[size]=x;
        size++;
    }
};