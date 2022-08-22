#include<bits/stdc++.h>
using namespace std;

class CQueue{
    private:
        int* arr;
        int front;
        int rear;
        int size;

    public:
        CQueue(int size){
            this->arr = new int[size];
            this->size = size;
            front = rear = -1;
        }

        void enque_front(int data){
            if((front == 0 and rear == size-1) or (rear == (front-1) % size)){
                cout << endl<< "ERROR: The Queue is full cannot insert " << data << endl;
                return;
            }
            else if(front == -1){
                front = rear = 0;
            }
            else if(front == size-1 and rear != 0){
                front = 0; 
            }
            else{
                front++;
            }
            arr[front] = data;
            cout << endl << "SUCCESSFULLY Front Inserted " << data << " at Index of Array " << front << endl;
            return;
        }


        void enque_rear(int data){
            //check is queue is full or not
            if ((front == 0 && rear == size - 1) || (rear == (front - 1) % size))
            {
                cout << endl << "ERROR: The Queue is full cannot insert " << data << endl;
                return;
            }
            else if(front == -1){
                front = rear = 0;
            }
            else if(front != 0 and rear == size-1){
                rear = 0;
            }
            else{
                rear++;
            }
            arr[rear] = data;
            cout << endl << "SUCCESSFULLY Rear Inserted " << data << " at Index of Array " << rear << endl;
            return;
        }

        int deque_rear(){
            if(rear == -1){
                cout << endl << "ERROR: Queue is empty, cannot Deque" << endl;
                return -1;
            }
            int element = arr[rear];
            if(front == rear){
                front = rear = -1;
            }
            else if(rear == 0){
                rear = size - 1;
            }
            else{
                rear--;
            }
            cout << endl << "Deque: Element at rear, dequeued " << element << endl;
            return element;
        }

        int deque_front(){
            if(front == -1){
                cout << endl << "ERROR: Queue is empty, cannot Deque" << endl;
                return -1; 
            }
            int element = arr[front];
            if(front == rear){
                front = rear = -1;
            }
            else if(front == size-1){
                front = 0;
            }
            else{
                front++;
            }
            cout << endl << "Deque: Element at front, dequeued " << element << endl;
            return element;
        }

        int getFront(){
            int element = arr[front];
            cout << endl << "Front element is " << element << endl;
            return element;
        }

        bool isEmpty(){
            if(front == -1)
                cout << endl << "EMPTY" << endl;
            else 
                cout << endl << "NON EMPTY" << endl;
            return (front == -1);
        }

        bool isFull(){
            if (front == rear - 1 or (front == 0 and rear == size - 1)){
                cout << endl << "FULL: front is " << front << " and rear is " << rear << endl;
                return true;
            }
            else{
                cout << endl << "NOT FULL: front is " << front << " and rear is " << rear << endl;
                return false;  
            }
        }
};

int main(){
    CQueue *q = new CQueue(5);

    deque<int> dq;

    q->enque_front(2);
    q->enque_rear(3);

    q->enque_front(4);
    q->enque_rear(5);

    q->enque_front(6);
    q->enque_rear(7);

    q->enque_front(8);
    q->enque_rear(9);

    q->getFront();

    q->deque_front();
    q->deque_rear();

    q->deque_front();
    q->deque_rear();

    return 0;

}