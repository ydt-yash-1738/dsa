#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void print(Node* head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertHead(Node* &head, Node* &tail, int d){
    //empty list
    if (head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
}

void insertTail(Node* &head, Node* &tail, int d){
    
    if (tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
    }
}

void insertAnypos(Node* &head, Node* &tail, int position, int d){
    if (position == 1){ 
        insertHead(head, tail, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while (cnt<position-1)  
    {
        temp=temp->next;
        cnt++;
    }
    //inserting @ last position
    if(temp->next==NULL){
        insertTail(head, tail, d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    //algorithm of inserting a node
    nodetoinsert->next = temp->next; 
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void deletenode(int position, Node* &head){
    //deleting first node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
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
        //follow this order
        curr->prev = NULL;
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getLength(head)<<endl;
    insertHead(head, tail, 11);
    print(head);
    insertTail(tail, tail, 9);
    print(head);
    insertAnypos(head, tail, 4, 100);
    print(head);
    deletenode(4, head);
    
    print(head);

    return 0;
}