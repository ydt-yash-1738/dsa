#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node whose data: "<<value<<endl;
    }
};
/*  1. Node create
    2. temp->next = curr->next
    3. curr->next = temp;
*/
void InsertNode(Node* &tail, int element, int d){
    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non-empty list
        //assuming that elemenis present in the list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }

}
void print(Node* &tail){
    Node* temp = tail;
    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    } while (tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail == NULL) return;

    else{
        //non-empty
        Node* prev = tail;
        Node* curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        //one node LL
        if(curr == prev){
            tail = NULL;
        }

        //>2 nodes
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    Node* tail = NULL;
    //inserting in empty list
    InsertNode(tail, 5, 3);
    print(tail);

    InsertNode(tail, 3, 5);
    print(tail);

    InsertNode(tail, 5, 7);
    print(tail);

    InsertNode(tail, 7, 9);
    print(tail);
    
    InsertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    return 0;
}