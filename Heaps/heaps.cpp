#include<bits/stdc++.h>
using namespace std;

class MyHeap{

    public:
    int *arr;
    int size;


    MyHeap(){
        arr = new int[250];
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;

        while(index>1){
            int parent = index / 2;
            if(parent>=1 && arr[parent]<arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                break;
        }
        printf("\nInserted %d into priority queue\n", val);
    }

    void print(){
        cout << endl
             << "Printing Priority Queue"<<endl;

        for (int i = 1; i <= size; i++){
            cout << arr[i] << "  ";
        }
        cout << endl;
    }

    void heapify()
    {
        int index = size;

        while (index >= 1)
        {
            int largest = index;
            int left = 2 * index;
            int right = 2 * index + 1;

            if (left <= size and arr[left] > arr[index])
                largest = left;

            if (right <= size and arr[right] > arr[index])
                largest = right;

            if (largest != index)
            {
                swap(arr[index], arr[largest]);
                index = largest;
            }
            else
                break;
        }
    }



    void deleteElement(){
        swap(arr[1], arr[size]);
        size--;
        heapify();
    }

    

};

void heapifyByRecursion(int* arr, int size, int i){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= size and arr[left] > arr[i])
        largest = left;

    if (right <= size and arr[right] > arr[i])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapifyByRecursion(arr, size, largest);
    }

    return;
}


int main(){

    MyHeap* mh = new MyHeap();

    mh->insert(30);
    mh->insert(40);
    mh->insert(50);
    mh->insert(20);
    mh->insert(10);
    mh->insert(5);
    mh->insert(300);
    mh->insert(0);
    mh->insert(765);
    mh->insert(500);
    mh->insert(205);
    mh->insert(1);
    mh->insert(53);
    mh->insert(56);

    mh->print();
    mh->deleteElement();
    // mh->heapify();
    heapifyByRecursion(mh->arr, mh->size, 1);
    mh->print();

    return 0;
}