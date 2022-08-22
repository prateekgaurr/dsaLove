#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}


void insertAtTail(Node* &tail, int data){
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void traverse(Node* head){
    if(head->next != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){

    Node* single = new Node(5);

    Node* head = single;
    Node* tail = single;

    traverse(head);

    insertAtHead(head, 4);
    traverse(head);
}