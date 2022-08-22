#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node *nextPtr;
    Node *prevPtr;

    //constructor
    Node(int data){
        this->data = data;
        this->nextPtr = NULL;
        this->prevPtr = NULL;
    }

    Node(Node* prev, int data){
        this->data = data;
        this->prevPtr = prevPtr;
        this->nextPtr = NULL;
    }

    Node(int data, Node *nextPtr){
        this->data = data;
        this->prevPtr = NULL;
        this->nextPtr = nextPtr;
    }
};


//function to traverse doubly linked list from front
void traverseFromHead(Node* head){
    cout << endl << "Traversing from Head: ";
    while(head != NULL){
        cout << head->data << "  ";
        head = head->nextPtr;
    }
    cout << endl;
}

void traverseFromTail(Node* tail){
    cout << "Traversing from Tail: ";
    while(tail != NULL){
        cout << tail->data << "  ";
        tail = tail->prevPtr;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int value){
    Node *newNode = new Node(value);
    newNode->nextPtr = head;
    head->prevPtr = newNode;
    head = newNode;
}

void insertAtTail(Node* &tail, int value){
    Node *newNode = new Node(value);
    tail->nextPtr = newNode;
    newNode->prevPtr = tail;
    tail = newNode;
}

int findLength(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->nextPtr;
    }
    return count;
}

int findLengthFromHead(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->nextPtr;
    }
    return count;
}

int findLengthFromTail(Node *tail)
{
    int count = 0;
    while (tail != NULL)
    {
        count++;
        tail = tail->prevPtr;
    }
    return count;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    //if linked list is null, just create a new node 
    if(head== NULL){
        Node *newNode = new Node(data);
        head = tail = newNode;
        return;
    }

    //get length of linked list first
    int length = findLength(head);


    //if out of bounds 
    if(position > length+1 or position < 1){
        cout << "\nERROR: Position out of bounds, cannot insert\n";
        return;
    }

    //if insertion is at head
    if(position==1){
        Node *newNode = new Node(data);
        head->prevPtr = newNode;
        newNode->nextPtr = head;
        head = newNode;
        cout << "\nOK: Node inserted at head, position: " << position << endl;
        return;
    }

    // if inserted at tail, update the tail also
    if (position == length + 1){
        Node *newNode = new Node(data);
        Node *lastNode = head;
        while(lastNode->nextPtr != NULL){
            lastNode = lastNode->nextPtr;
        }

        lastNode->nextPtr = newNode;
        newNode->prevPtr = lastNode;
        tail = newNode;
        cout << "\nOK: Node inserted at tail, position: " << position << endl;
        return;
    }

    //inserting at other position
    Node *curr = head;
    int travel = position - 2;
    while(travel-- and curr != NULL){
        curr = curr->nextPtr;
    }

    Node *toBeInsertedBefore = curr->nextPtr;

    Node *newNode = new Node(data);

    newNode->prevPtr = curr;
    curr->nextPtr = newNode;

    newNode->nextPtr = toBeInsertedBefore;
    toBeInsertedBefore->prevPtr = newNode;

    cout << "\nOK: Node inserted at position " << position << endl;
    
}


void deleteAtPosition(Node* &head, Node* &tail, int position){
    // if LL is empty, return
    if(head == NULL)
        return;

    //if deleting head
    if(position == 1){
        Node *toBeDeleted = head;
        toBeDeleted->nextPtr->prevPtr = NULL;
        head = toBeDeleted->nextPtr;
        toBeDeleted->nextPtr = NULL;
        delete toBeDeleted;
        cout << "\nOK: Head deleted successfully\n";
        return;
    }

    int travel = position - 1;
    Node *toBeDeleted = head;

    while(travel--){
        if(toBeDeleted->nextPtr == NULL){
            //out of bounds hai bhai, wpas ja
            cout << "\nERROR: Position out of bounds\n";
            return;
        }
        toBeDeleted = toBeDeleted->nextPtr;
    }

    Node *prev = toBeDeleted->prevPtr;

    // you are deleting tail
    if(toBeDeleted->nextPtr == NULL){
        tail = prev;
        tail->nextPtr = NULL;
        delete toBeDeleted;
        cout << "\nOK: Deleted successfully at tail, position: " << position << endl;
        return;
    }

    //if it was not tail
    Node *next = toBeDeleted->nextPtr;
    prev->nextPtr = next;
    next->prevPtr = prev;
    delete toBeDeleted;
    cout << "\nOK: Deleted successfully at position: " << position << endl;
}

void printBothLength(Node* head, Node* tail){
    cout << "Length from Head: " << findLengthFromHead(head) << endl
         << "Length from Tail: " << findLengthFromTail(tail) << endl;
}


void deleteByValue(Node* &head, Node* &tail, int value){
    if(head==NULL)
        return;

    //find the given element untill end of the linked list
    Node *temp = head;
    while(temp != NULL){
        if(temp->data == value) {
            //value mil gayi
            Node *next = temp->nextPtr;
            Node *prev = temp->prevPtr;

            // agar head delete kia h to
            if(prev == NULL){
                next->prevPtr = NULL;
                head = next;
            }
            //agar tail delete kia h to
            if(next == NULL){
                prev->nextPtr = NULL;
                tail = prev;
            }

            if(prev != NULL and next!= NULL){
                next->prevPtr = prev;
                prev->nextPtr = next;
            }
            delete temp;
            cout << "\nOK: Deleted successfully the value : " << value << endl;
            return;
        }
        temp = temp->nextPtr;
    }

    //agar valuie mili hi nahi
    cout << "\nERROR: No Such value found\n";
}



//DRIVER CODE
int main(){

    Node *firstNode = new Node(20);

    Node *head = firstNode;
    Node *tail = firstNode;

    insertAtHead(head, 15);
    insertAtHead(head, 10);
    insertAtHead(head, 5);
    insertAtTail(tail, 25);
    insertAtTail(tail, 30);
    insertAtTail(tail, 35);
    insertAtTail(tail, 40);

    traverseFromHead(head);
    traverseFromTail(tail);
    printBothLength(head, tail);

    insertAtPosition(head, tail, 5, 90);

    traverseFromHead(head);
    traverseFromTail(tail);
    printBothLength(head, tail);

    deleteByValue(head, tail, 5);

    traverseFromHead(head);
    traverseFromTail(tail);
    printBothLength(head, tail);

    return 0;
}