#include<bits/stdc++.h>
using namespace std;

class MyQueue{

    private:
        int *arr;
        int front;
        int rear;
        int size;

    public:
    MyQueue(int size){
        this->size = size;
        arr = new int[size];
        this->front = -1;
        this->rear = -1;
    }

    void push(int element){
        if(rear > size){
            cout << endl << "FAIL: QUEUE OVERFLOW WHILE INSERTING " << element << endl;
            return;
        }

        else{
            arr[rear++] = element;
        }
    }

    bool isEmpty()
    {
        return (front == rear);
    }

    int pop(){
        if(!isEmpty()){
            int element = arr[front++];
            if(front == rear){
                front = -1;
                rear = -1;
            }
            return element;
        }
        else
            return -1;
    }
    
    int getFront(){
        if(isEmpty())
            return -1;
        return arr[front];
    }


    void printQueue(){
        int fr = front;
        int re = rear;
        cout << endl
             << "The queue is: " << endl;
        while(fr != rear){
            cout << arr[fr++] << " <-- ";
        }
        cout<<endl;
    }


};



int main(){

    MyQueue *q = new MyQueue(5);

    q->push(1);
    q->push(2);
    q->push(3);
    q->push(4);
    q->push(5);
    q->push(6);
    q->push(7);
    q->push(8);
    q->push(9);

    q->printQueue();

    cout << endl << "popped out " << q->pop();
    cout << endl << "popped out " << q->pop();
    cout << endl << "popped out " << q->pop();
    cout << endl << "popped out " << q->pop();

    q->push(11);
    q->push(12);
    q->push(13);
    q->push(14);
}