#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void InsertHead(Node* &head, int d){
    //creating new node
    Node* temp = new Node(d);
    temp->next = head;
    head=temp;
}

void InsertTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertMid(Node* &head, Node* &tail, int position, int d){
    Node* temp = head;
    if(position==1){
        InsertHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt=1;

    while (cnt<position-1)  
    {
        temp=temp->next;
        cnt++;
    }
    //updating tail 
    if(temp->next=NULL){
        InsertTail(tail,d);
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next; 
    temp->next = nodetoinsert; 
    
}
//how to traverse a LL
void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deletenode(int position, Node* &head){
    //deleting first node
    if(position==1){
        Node* temp = head;
        head = head -> next;
        temp->next=NULL;
        delete temp;
    }
    //any other node
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while (cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    //creating new node
    Node* node1 = new Node(1);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertTail(tail, 2);
    print(head);
    InsertTail(tail, 5);
    print(head);
    InsertMid(head, tail, 4, 22);
    print(head);
    deletenode(4, head);
    print(head);
    return 0;
}