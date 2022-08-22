#include<algorithm>
#include<iostream>
using namespace std;


int binary_srch(int * arr, int size, int target){
    int sIndex=0, eIndex=size-1, mid=(sIndex+eIndex)/2;
    int focc=-1;
    while(sIndex<=eIndex){
        if(arr[mid]==target) focc=mid;
        if(target<=arr[mid]) eIndex=mid-1;
        else sIndex=mid+1;
        mid=(sIndex+eIndex)/2;
    }
    return focc;
}

int firstocc(int * arr, int size, int target){
    int ans=-1, sIndex=0, eIndex=size-1, mid=(sIndex+eIndex)/2;
    while(sIndex<=eIndex){
        if(arr[mid]==target) ans=mid;
        if(target<=arr[mid]) eIndex=mid-1;
        else sIndex=mid+1;
        mid=(sIndex+eIndex)/2; 
    }
    return ans;
}

int lastocc(int * arr, int size, int target){
    int ans = -1, sIndex=0, eIndex = size-1, mid=(sIndex+eIndex)/2;
    while(sIndex<=eIndex){
        if(arr[mid]==target) ans = mid;
        if(target<arr[mid]) eIndex=mid-1;
        else sIndex=mid+1;
        mid=(sIndex+eIndex)/2;
    }
    return ans;
}

int countOcc(int * arr, int size, int target){
    //first counting first occurance
    int firstOcc=-1, sIndex=0, eIndex=size-1;
    while(sIndex<=eIndex){
        int mid=(sIndex+eIndex)/2;
        if(arr[mid]==target){
            firstOcc=mid;
            eIndex=mid-1;
        }
        if(target<=arr[mid]) eIndex=mid-1;
        else sIndex=mid+1;
    }
    //last occurance
    int lastOcc=-1;
    sIndex=0; eIndex=size-1;
    while(sIndex<=eIndex){
        int mid = (sIndex+eIndex)/2;
        if(arr[mid]==target){
            lastOcc=mid;
            sIndex=mid+1;
        }
        if(target<arr[mid]) eIndex=mid-1;
        else sIndex=mid+1;
    }
    printf("\nFirst Occurance: %d and Last Occurance: %d",firstOcc,lastOcc);
    return lastOcc-firstOcc+1; 
}


int valuesameindex(int * arr, int size){
    int sIndex=0, eIndex=size-1, ans=-1;
    while(sIndex<=eIndex){
        int mid = (sIndex + eIndex) / 2;
        if(arr[mid]==mid)
            return mid;
        if(arr[mid]<mid) // Go to Right
            sIndex = mid + 1;
        else
            eIndex = mid - 1;
    }
    return -1;
}

int findPivotInArray(int * arr, int size){
    int sIndex = 0, eIndex = size - 1;
    while(sIndex<eIndex){
        int mid=(sIndex+eIndex)/2;
        if(arr[mid]>=arr[0])
            sIndex = mid+1;
        else
            eIndex = mid;
    }
    return sIndex;
}

// Binary Search - Simple
int binarySrch(int *arr, int start, int end, int target)
{
    while(start<=end){
        int mid = (start + end) / 2;
        if(arr[mid] == target)
            return mid;
        if(target<arr[mid])
            end = mid - 1;
            else
                start = mid + 1;
    }
    return -1;
}

// Search in sorted and ROtated Array
int searchInSortedAndRotatedArray(int * arr, int size, int target){
    int sIndex = 0, eIndex = size - 1, ans = -1;
    //finding pivot element
    int pivot = -1;
    while(sIndex<eIndex){
        int mid = (sIndex + eIndex) / 2;
        if(arr[mid]>=arr[0])
            sIndex = mid + 1;
            else
                eIndex = mid;
    }
    pivot = sIndex;
    if(target>=arr[pivot]&&target<=arr[size-1]){
        //binary search
        ans = binarySrch(arr, pivot, size - 1, target);
    }
    else
        ans = binarySrch(arr, 0, pivot - 1, target);

    return ans;
}




int main(){

    int arr[] = {16,17,18,1,4,7,10,14};

    int size=sizeof(arr)/sizeof(arr[0]);
    
    // cout<<binary_srch(arr, size, 88);

    //find first occurance of target
    // cout<<firstocc(arr, size, 3);

    //find last occurance of target
    // cout<<lastocc(arr, size, 3);


    //count the no of occurance of target
    // cout<<endl<<countOcc(arr, size, 3);

    //find value=index in sorted array
    // cout<<endl<<valuesameindex(arr, size);


    // find pivot element in an array
    // cout << endl
    //      << "Pivot Element: " << findPivotInArray(arr, size);


    // search in sorted and rotated array
    cout << endl
         << "Target is present in location: " << searchInSortedAndRotatedArray(arr, size, 16);



    
    return 0;
}