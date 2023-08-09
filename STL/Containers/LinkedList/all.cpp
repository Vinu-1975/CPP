#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};

void insertAtTail(Node* &head,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

void insertAtFront(Node* &head,int val){
    Node* newnode=new Node(val);
    
    newnode->next=head;
    head=newnode;

}

void insertAtPos(Node* &head,int val,int pos){
    Node* newnode=new Node(val);
    
    if(head==NULL){
        head=newnode;
        return;
    }else{
        Node* temp=head;
        for (int i = 0; i < pos-2; i++)
        {
            temp = temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    

}

void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void delBegin(Node* &head){
    if(head==NULL){
        cout<<"Empty Linked List!"<<endl;
        return;
    }
    else{
        Node* temp=head;
        head=head->next;
        delete temp;
    }
}

void delEnd(Node* &head){
    if(head==NULL){
        cout<<"Empty Linked List!"<<endl;
        return;
    }
    else{
        if(head->next==NULL){
            head=NULL;
        }
        Node* temp=head;
        Node* temp2;
        while(temp->next!=NULL){
            temp2=temp;
            temp=temp->next;
        }
        temp2->next=NULL;
        delete temp;
    }
}

void DeleteVal(Node* &head,int val){
    if(head==NULL){
        cout<<"Emtpy!"<<endl;
        return;
    }
    else{
        Node* temp=head;
        Node* temp2;
        while(temp->next->data==val){
            temp2=temp;
            temp=temp->next;
        }
        Node* todelete=temp;
        temp2->next=temp2->next->next;
        delete todelete;
    }
}

int main(){
    Node* head=NULL;
    insertAtFront(head,14);
    insertAtFront(head,13);
    
    insertAtTail(head,16);
    insertAtTail(head,17);

    insertAtPos(head,15,3);
    display(head);

    delBegin(head);
    display(head);

    delEnd(head);
    display(head);

    DeleteVal(head,15);
    display(head);
}