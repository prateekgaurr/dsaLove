#include<bits/stdc++.h>
using namespace std;

// Node Class Defination
class Node{
    public:
    int data;
    Node *nextPtr;

    // default constructor
    Node(int data){
            this->data = data;
            this->nextPtr = NULL;
    }

    // constructor with next node
    Node(int data, Node* nextPtr){
        this->data = data;
        this->nextPtr = nextPtr;
    }

};

// Method to insert at Head
void insertAtHead(Node* &head, int data){
    Node *newNode = new Node(data);
    newNode->nextPtr = head;
    head = newNode;
}

// Method to insert at Tail
void insertAtTail(Node* &tail, int data){
    Node *newNode = new Node(data);
    tail->nextPtr = newNode;
    tail = newNode;
}

// Method to Traverse
void traverse(Node* head){
    cout << endl
         << "The Linked List is:\n";
    while(head != NULL){
        cout << head->data << "  ";
        head = head->nextPtr;
    }
    cout << endl;
}

// Method to find length
int findLength(Node* head){
    int length = 0;
    while(head != NULL){
        length++;
        head = head->nextPtr;
    }
    return length;
}

// Method to insert at position
void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    int length = findLength(head);

    // if the list is empty, insert at head
    if (head == NULL){
        insertAtHead(head, data);
        cout << "\nNOTE: Linked List was empty, but element is inserted at head\n";
    }


    if(position == 1){
        Node *newNode = new Node(data);
        newNode->nextPtr = head;
        head = newNode;
        return;
    }
        
    // if the position is out of the length, return
    if(position-1 > length or position < 1){
        cout << "\nERROR: Position out of bounds, Cannot insert\n";
        return;
    }

    // insert at given position -> first traverse to the given position, and then insert
    int t = position - 2;
    Node *curr = head;
    while(t-- and curr != NULL){
        curr = curr->nextPtr;
    }
    //main insertion
    Node *newNode = new Node(data);
    newNode->nextPtr = curr->nextPtr;
    curr->nextPtr = newNode;

    // if inserting at tail, update the tail as well
    if (position -1 == length) tail = newNode;
}

// Method to delete at Given Positiom
void deleteAtPosition(Node* &head, Node* &tail, int position){
    int length = findLength(head);

    //if position is greater than length and less than 0, out of bounds
    if(position > length or position < 1){
        cout << endl
             << "ERROR: Cannot delete, given position is out of bounds" << endl;
        return;
    }

    //if head is deleted
    if(position == 1){
        Node *toBeDeleted = head;
        head = head->nextPtr;
        toBeDeleted->nextPtr = NULL;
        delete toBeDeleted;
        return;
    }

    Node *reach = head;
    Node *toBeDeleted = head->nextPtr;
    int t = position - 2;
    while(t-- and reach != NULL){
        reach = reach->nextPtr;
        toBeDeleted = reach->nextPtr;
    }
    reach->nextPtr = toBeDeleted->nextPtr;
    toBeDeleted->nextPtr = NULL;
    delete toBeDeleted;
    //if deleted was tail, update the tail
    if(position == length)
        tail = reach;
}

// Method to delete a given vaue's 1st occurence
void deleteByValue(Node* &head, Node* &tail, int value){
    Node *temp = head;
    int count = 0;
    int length = findLength(head);
    while(temp != NULL){
        count++;
        if(temp->data == value){
            deleteAtPosition(head, tail, count);
            return;
        }
        temp = temp->nextPtr;
    }
    cout << "\nERROR: Given Value was not found in Linked List" << endl;
}

// Method to reverse a linked list
Node* reverseLinkedList(Node* head){
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while(curr){
        next = curr->nextPtr;
        curr->nextPtr = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Is List Circular
bool isCircular(Node* head){
    Node *originalHead = head;
    while(head){
        if(head->nextPtr == originalHead)
            return true;
        head = head->nextPtr;
    }
    return false;
}

//Driver Code
int main(){

    Node *firstNode = new Node(5);
    
    //Defining head and tail
    Node *head = firstNode;
    Node *tail = firstNode;

    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtTail(tail, 6);
    insertAtTail(tail, 7);
    insertAtTail(tail, 8);

    cout << "\nLength is: " << findLength(head);
    traverse(head);

    // // insertAtPosition(head, tail, 9, 99);
    // // deleteAtPosition(head, tail, 8);
    // // deleteByValue(head, tail, 1);

    // cout << "\nLength is: " << findLength(head);
    // traverse(head);


    //to reverse a linked list
    // Node *reversedHead = reverseLinkedList(head);
    // traverse(reversedHead);
    cout << "\nLength is: " << findLength(head);

     return 0;
}