#include<bits/stdc++.h>
using namespace std;

void printArray(int * arr, int size){
    cout << endl << "********* Array is *********"<<endl;
    for (int i = 0; i < size; i++) cout<<arr[i]<<"\t";
    cout << endl;
}


void selectionSort(int * arr, int size){
    cout << endl
         << "Performing Selection Sort" << endl;
    for (int i = 0; i < size; i++){
        int minIndex = i;
        for (int j = i + 1; j < size; j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
            swap(arr[i], arr[minIndex]);
    }
}


void bubbleSort(int * arr, int size){
    cout << endl
         << "Performing Bubble Sort" << endl;
    //ith round me ith largest element apni right jagah pe pauch jaega
    for (int round = 0; round < size; round++){
        for (int i = 0; i < size - round -1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}


void insertionSort(int * arr, int size){
    cout << endl
         << "Performing Insertion Sort" << endl;
    for (int i = 1; i < size; i++){
        int j = i - 1, temp = arr[i];
        //loop for shifting
        for (; j >= 0; j--){
            //shift if
            if(arr[j]>temp)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = temp;
    }
}



void inserSort(int * arr, int size){
    for (int i = 1; i < size; i++){
        int j = i - 1, temp = arr[i];
        for (; j >= 0; j--){
            if(arr[j]>temp)
                arr[j + 1] = arr[j];
                else
                    break;
        }
        arr[j + 1] = temp;
    }
}

void inserSort2(int *arr, int size)
{
    cout << "\nTEST INSERTION SORT\n";
    // keep a reference and insert smaller elements in middle
    for (int i = 1; i < size; i++)
    {
        int j = i - 1, temp = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = temp;
    }
}

int secondLargest(int * arr, int size){
    int largest = arr[0], selargest = arr[0];
    for (int i = 0; i < size; i++){
        if(largest<arr[i])
            largest = arr[i];
        if(selargest+1<largest)
            selargest = largest;
    }
    return selargest;
}


void selectionSort2(int * arr, int size){
    cout << endl
         << "TEST: SELECTION SORT\n";
    for (int i = 0; i < size; i++){
        int minIndex = i;
        for (int j = i + 1; j < size; j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}


void bubbleSort2(int * arr, int size){
    cout << "\nTEST BUBBLE SORT\n";
    for (int round = 0; round < size; round++){
        //compare adjacet elemenrt
        for (int i = 0; i < size - round - 1; i++){
            if(arr[i]>arr[i+1])
                swap(arr[i], arr[i + 1]);
        }
    }
}





int main(){

    int arr[] = {7, -65, -3, -21, 44, -4, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    // selectionSort2(arr, size);
    // bubbleSort2(arr, size);
    inserSort2(arr, size);

    printArray(arr, size);

    // cout << "SEC LARG: " << secondLargest(arr, size);

    return 0;
}