#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(Node* &head,int val){

    Node* newNode=new Node(val);

    if(head == NULL){
        head=newNode;
        return;
    }

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;

}

void insertionAtFront(Node* &head,int val){
    Node* n=new Node(val);

    n->next=head;
    head=n;
}

void insertAfter(Node* &head,int val){
    if(head == NULL){
        cout<<"The given node cannot be NULL"<<endl;
        return;
    }

    Node* n=new Node(val);

    n->next=head->next;
    head->next=n;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtPos(Node* &head,int val,int pos){
    Node* n=new Node(val);

    if(head==NULL){
        head=n;
        return;
    }else{
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
    }

    
}

int main(){
    Node* head=NULL;
    insertAtTail(head,14);
    insertAtTail(head,15);
    insertAtTail(head,16);
    insertAtTail(head,17);

    insertionAtFront(head,13);

    insertAfter(head->next->next,20);

    insertAtPos(head,12,2);
    display(head);
}