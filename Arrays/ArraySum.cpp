#include <bits/stdc++.h>
using namespace std;

int sumArr(int * arr, int size){
    if(size == 1)
        return arr[0];

    return sumArr(arr + 1, size - 1) + arr[0];
}

int mysearch(int * arr, int st, int end, int target){
    //Base case
    int mid = (st + end) / 2;

    if(arr[mid]==target)
        return mid;

    if(st > end)
        return -1;
    
    //if element is small it is in left part
    if(arr[mid]>target)
        return mysearch(arr, st, mid - 1, target);

    // if element is large it is in right part
    if (arr[mid] < target)
        return mysearch(arr, mid + 1, end, target);
}

void reverseStr(string &tobe, int st, int end){

    //BC
    if(st>=end)
        return;

    swap(tobe[st], tobe[end]);
    reverseStr(tobe, st + 1, end - 1);
}

bool isPalindrome(string str, int st, int end){
    if(st>end)
        return true;
    if(str[st] != str[end])
        return false;

    return isPalindrome(str, st + 1, end - 1);
}


long findPower(int i, int j){
    if(j==0)
        return 1;
    
    if(j==1)
        return i;

    if(j & 1)
        return i * findPower(i, j / 2) * findPower(i, j / 2);

    else
        return findPower(i, j / 2) * findPower(i, j / 2);
}


void bubbleSort(int * arr, int size){
    if(size<2)
        return;

    for (int i = 0; i < size - 1; i++){
            if(arr[i]>arr[i+1])
                swap(arr[i], arr[i + 1]);
        }
        bubbleSort(arr, size - 1);
}




void bubbleSort2(int * arr, int size){
    // Base case
    if(size<2)
        return;

    // For every small element
    for (int i = 0; i < size-1; i++){
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i + 1]);
    }

    // Recursive Call
    bubbleSort(arr, size - 1);
}

void myMergeSort(int * arr, int size, int st, int e){
    // Base case
    if(st >=  e)
        return;

    int mid = (st + e) / 2;

    int leftArrSize = mid - st;

    int rightArrSize = e - mid+1;

    int * leftArray = new int[leftArrSize];

    int *  rightArray = new int[rightArrSize];

    // copy data to new arrays
    for (int i = 0; i < leftArrSize; i++){
        leftArray[i] = arr[st + i];
    }

    for (int i = 0; i < rightArrSize; i++){
        rightArray[i] = arr[mid + 1 + i];
    }

}


void printAllSubset(string & str, int size){

    // Base Case
    if(size<1)
        return;

    
}

vector<int> solve(vector<int> arr1, vector<int> arr2)
{
    for (auto num : arr2)
        arr1.push_back(num);
    sort(arr1.begin(), arr1.end());
    return arr1;
}

int main(){

    int arr[] = {3, 11, 20, 70, 10, 17, 45, 78, 100, -135, 567};
    int size = 11;

    string mystr = "prateek";
    // cout << "Found At: " << mysearch(arr, 0, size, 476);
    // reverseStr(mystr, 0, mystr.length() - 1);
    // cout << "Reversed String is: " << mystr;
    // cout << isPalindrome(mystr, 0, mystr.length() - 1);

    // cout << findPower(2, 10);

    // bubbleSort2(arr, 11);

    // myMergeSort(arr, size, 0, size - 1);

    // for(auto i : arr)
    //     cout << "  " << i;

    // printAllSubset(mystr, mystr.length());

    vector<int> arr1 = {2, 4, 6, 8, 10};
    vector<int> arr2 = {1,3,5,7,9};

    vector<int> merged = solve(arr1, arr2);

    for(auto num: merged)
        cout << num << " ";

    return 0;
};