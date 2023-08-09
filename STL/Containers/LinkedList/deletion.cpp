#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};


void display(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;
}

void DeleteBeginning(Node* &head){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    else{
        Node* temp=head;
        head=head->next;
        delete temp;
    }
}

void DeleteEnd(Node* &head){
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }else{
        if(head->next==NULL){
            head=NULL;
        }else{
            Node *temp = head;
            Node *temp2;
            while (temp->next != NULL)
            {
                temp2=temp;
                temp = temp->next;
            }
            temp2->next=NULL;
        }
    }
    
}

void DeleteVal(Node* &head,int val){
    Node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

int main(){
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    Node* fourth=NULL;

    head=new Node(1);
    second=new Node(2);
    third=new Node(3);
    fourth=new Node(4);
    head->next=second;
    second->next=third;
    third->next=fourth;

    DeleteBeginning(head);
    DeleteEnd(head);
    DeleteVal(head,2);
    display(head);
}