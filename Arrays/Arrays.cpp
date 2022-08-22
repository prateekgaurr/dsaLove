#include<iostream>
#include<limits>
#include<set>
#include<map>
#include <bits/stdc++.h>
using namespace std;

// Function for printing array
void printArr(int * arr, int size){
    cout<<endl<<endl<<"Array: ";
    for(int i=0; i<size; i++){
        cout<<"\t"<<arr[i];
    }
    cout<<endl;
}

// Q.1. Linear Search
int linearSearch(int * arr, int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target) return i;
    }
    return -1;
}

// // Q.2. Reverse an Array
void reverseArr(int * arr, int size){
    int i=0, j=size-1;
    while(i<j){
        swap(arr[i], arr[j]);
        j--;
        i++;
    }
    printArr(arr, size);
}

// Q.3. Find Max and Min in an array
void findMinMax(int * arr, int size){
    int min=arr[0], max=arr[0];
    for(int i=0; i<size; i++){
        if(min>arr[i]) min = arr[i];
        if(max<arr[i]) max = arr[i];
    }
    cout<<endl<<"***** MIN: "<<min<<"   MAX: "<<max<<endl;
}


// Q.4. Swap Alternates in an Array
void swapAlternates(int * arr, int size){
    for(int i=0; i<size; i=i+2){
       if(i<size-1) swap(arr[i], arr[i+1]); 
    }
    printArr(arr, size);
}


// Q.5. Sort an array of 0, 1 and 2
void sortOf012(int* arr, int size){
    int zeroes = 0, ones = 0, twos = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==0) zeroes++;
        if(arr[i]==1) ones++;
        if(arr[i]==2) twos++;
    }
    int i=0;
    while(zeroes>0){
        arr[i++] = 0;
        zeroes--;
    }
    while(ones>0){
        arr[i++] = 1;
        ones--;
    }
    while(twos>0){
        arr[i++] = 2;
        twos--;
    }
    printArr(arr, size);
}



// Q.6. Move all Negative No to one side of an array
void moveAllNeg(int * arr, int size){
    int j=0;
    for(int i=0; i<size; i++){
        if(arr[i]<0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    printArr(arr, size);
}


// Q.7. Union and Intersection of 2 sorted Arrays
void unionIntersection(int *arr1, int *arr2, int size1, int size2){
    //finding union
    int i=0, j=0; 
    cout<<endl<<"Union: ";
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]) cout<<"\t"<<arr1[i++];
        else if(arr2[j]<arr1[i]) cout<<"\t"<<arr2[j++];
        else{
            cout<<"\t"<<arr1[i++];
            j++;
        }
    }
    //printing rest of elements in either larger array
    while(i<size1)
        cout<<"\t"<<arr1[i++];
    //if arr2 is bigger
    while(j<size2)
        cout<<"\t"<<arr2[j++];

    //printing Intersection 
    cout<<endl<<"Intersection: ";
    i=0; j=0;
    while(i<size1){
        while(j<size2){
            if(arr1[i]==arr2[j]) cout<<"\t"<<arr1[i];
            j++;
        }
        i++;
    }
}


// Q.8. Cyclically rotate an array by 1
void rotateArr(int * arr, int size){
    int endElement = arr[size-1];
    for(int i=size-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = endElement;
    printArr(arr, size);
}


// Q.9. Find duplicate in an array of N+1 integers
int findDuplicate(int * arr, int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]) return arr[i];
        }
    }
    return -1;
}


// Q.10. Find a pair that sum to a given value
// Brute force approach
void findPair(int * arr, int size, int number){
    bool found = false;
    for(int i=0; i<size; i++){
        for(int j=0; j<i; j++){
            if(arr[i]+arr[j]==number){
                found=true;
                printf("\nPair found at index Position %d and %d and numbers in pair are %d and %d\n",i,j,arr[i],arr[j]);
                break;
            }
        }
    }
    if(!found) cout<<endl<<"Such pair of values can not be found"<<endl;
}

// optimal approach
// first sort the array and then follow two pointer approach
void findPair2(int arr[], int size, int number){
    sort(arr, arr+size);
    int i=0, j=size-1;
    while(i<j){
        if(arr[i]+arr[j]<number) i++;
        else if(arr[i]+arr[j]>number) j--;
        else {
            printf("\nPair found at index Position %d and %d and numbers in pair are %d and %d\n",i,j,arr[i],arr[j]);
            break;
        }
    }
}



// Q.11. Find Triplet that sums to a given value
void findTriplet(int * arr, int size, int number){
    bool found = false;
    for(int i=0; i<size; i++){
        for(int j=0; j<i; j++){
            for(int k=0; k<j; k++){
                if(arr[i]+arr[j]+arr[k]==number){
                    found=true;
                    printf("\nTriplets found at index locations %d, %d and %d and the triplets pair is of %d, %d and %d",i,j,k,arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    if(!found) cout<<endl<<"Such pair of values can not be found"<<endl;
}

// optimal approach
void findTriplet2(int * arr, int size, int number){
    bool found = false;
    sort(arr, arr+size);
    for(int i=0; i<size-2; i++){
        int sIndex = i+1, eIndex = size-1;
        while(sIndex<eIndex){
            if(arr[i]+arr[sIndex]+arr[eIndex]>number) eIndex--;
            else if(arr[i]+arr[sIndex]+arr[eIndex]<number) sIndex++;
            else{
                found=true;
                printf("\nTriplets found at index locations %d, %d and %d and the triplets pair is of %d, %d and %d",i,sIndex,eIndex,arr[i], arr[sIndex], arr[eIndex]);
                break;
            }
        }
    }
    if(!found) cout<<endl<<"Such pair of values can not be found"<<endl;
}


// Q.12. Is the array palindrome or not
bool findPalindrome(int * arr, int size){
    int startIndex = 0, endIndex=size-1;
    while(startIndex<endIndex){
        if(arr[startIndex]!=arr[endIndex]) return false;
        startIndex++;
        endIndex--;
    }
    return true;
}

// Q.13. Minimum Swaps Required Bring elements less equal k together
int minSwaps(int * arr, int size, int k){
    int good=0;
    //counting the number of elements good
    for(int i=0; i<size; i++){
        if(arr[i]<=k) good++;
    }
    //using sliding window technique
    //initialize both indexes
    int i=0, j=good, bad=0;

    //finding bad in current window
    for(int i=0; i<good; i++){
        if(arr[i]>k) bad++;
    }

    int ans = bad;
    while(j<size){
        if(arr[i]>k) bad--;
        if(arr[j]>k) bad++;
        ans=min(ans, bad);
        i++;
        j++;
    }
    return ans;
}



// Q.14. Unique No. of occurences - Leetcode
void uniqueNoOfOccurences(int * arr, int size){

}


// Q.15. Kadane's Algo (Finding subarray with maximum sum than other sub arrays)
int kadaneAlgo(int * arr, int size){
    int sum=0, ans=INT_MIN;
    int sIndex=0, eIndex=0;
    for(int i=0; i<size; i++){
        sum=sum+arr[i];
        if(ans<sum){
            ans=sum;
            eIndex=i;
        }
        if(sum<0) {
            sum=0;
            sIndex=i+1;
        }
    }
    printf("\nStart Index: %d, End Index: %d",sIndex,eIndex);
    printf("\nSubarray: ");
    for(int i=sIndex; i<=eIndex; i++){
        cout<<"\t"<<arr[i];
    }
    return ans;
}


// Q.16. Find common elements in 3 sorted arrays
void commonElements(int * arr1, int * arr2, int * arr3, int size1, int size2, int size3){
    cout<<endl<<"Common Elements: ";
    int i=0, j=0, k=0;
    while(i<size1 && j<size2 && k<size3){
        if(arr1[i] == arr2[j] && arr2[j]==arr3[k]){
            cout<<"\t"<<arr1[i];
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j]) i++;
        else if(arr2[j]<arr3[k]) j++;
        else k++;
        while(arr1[i]==arr1[i-1]) i++;
        while(arr2[j]==arr2[j-1]) j++;
        while(arr3[k]==arr3[k-1]) k++;
    }
}


// Q.17. Find first repeating element in an array
// Brute Force Approach (n^2)
int firstRepeatingElement(int * arr, int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]) return arr[i];
        }
    }
    return -1;
}

// Optimal Approach(n on average) using set
int firstRepeatingElement2(int * arr, int size){
    set<int> elements;
    int min=-1;
    for(int i=size-1; i>=0; i--){
        printf("\nelements.end() is %d",*elements.end());
        if(elements.find(arr[i])!=elements.end()) 
            min=i;
        else elements.insert(arr[i]);
    }
    if(min!=-1) return arr[min];
    else return -1;
}

// optimal approach 2 (using map)
int firstRepeatingElement3(int * arr, int size){
    unordered_map<int, int> map;
    for(int i=size-1; i>=0; i--){
        map[arr[i]]++;
    }
    //traverse through map and find if number is greater than 1
    for(int i=0; i<size; i++){
        if(map[arr[i]]>1) return arr[i];
    }
    return -1;
}


// Q.18. Find first non repeating element in an array
// Brute force approach (n^2)
int findNonRepeating(int * arr, int size){
    for(int i=0; i<=size; i++){
        for(int j=0; j<=size; j++){
            if(i!=j && arr[i]==arr[j])
            break;
            if(j==size) return arr[i];
        }
    }
    return -1;
}

// Optimal Approach using hashmaps
int findNonRepeating2(int * arr, int size){
    unordered_map<int, int> map;
    for(int i=0; i<size; i++){
        map[arr[i]]++;
    }
    //traverse the map
    for(int i=0; i<size; i++){
        if(map[arr[i]] == 1) return arr[i];
    }
    return -1;
}



// Q.19. Find sub arrays with equal 0s and 1s
// Brute force approach
void findEqual0and1(int * arr, int size){
    int count = 0, greatestSize = 0;
    for(int i=0; i<size; i++){
        int sum = 0;
        for(int j=i; j<size; j++){
            if(arr[j] == 0) sum = sum - 1;
            else if(arr[j] == 1) sum = sum + 1;
            if(sum == 0){
            count++;
            int size = j-i;
            greatestSize=max(greatestSize, size);
            cout<<endl<<"*****Found "<<count<<"th sub array with equal no. of 0s and 1s from "<<i<<" to "<<j;
            printf("\nGreatest size is %d",greatestSize);
            }
        }
    }
    if(count == 0) cout<<endl<<"*****Such sub array can not be found";
}


// optimal approach
void findEqual0and11(int * arr, int size){
    unordered_map<int, int> map;
    map[0]=1;
    int ans = 0, sum = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == 0) sum = sum - 1;
        else if (arr[i] == 1) sum = sum + 1;
        ans = ans + map[sum];
        map[sum]++;
    }
    cout<<endl<<"***** SubArrays found are "<<ans;
}


// Q.20. Find subarray with 0 sum in an array
// Brute force approach
void findSubarrayWith0Sum(int * arr, int size){
    bool found = false;
    for(int i=0; i<size; i++){
        int sum = 0;
        for(int j=i; j<size; j++){
            sum = sum + arr[j];
            if(sum == 0){
                found = true;
                printf("Found subarray with sum 0 at Index from %d to %d",i,j);
            }
        }
    }
    if(!found) cout<<endl<<"***** Sub array with sum 0 cannot be found";
}


// optimal approach
/* We'll run the loop only once to reduce time complexity to O(n).
here we'll use hashmaps*/
void findSubarrayWith0Sum1(int* arr, int size){
    int sum = 0;
    bool found = false;
    unordered_map<int, int> map;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
        if(arr[i]==0 || map[sum] || sum == 0){
            found = true;
            cout<<endl<<"Found a Sub array with sum equal to zero";
        }
        else{
            map[sum] = 1;
        }
    }
    if(!found) cout<<endl<<"***** Such sub array can not be found";
}


// Q.21. Find factorial of a large number
// using arrays
void factorial(int num){
    int multiply(int multiplyTo, int * factArr, int resultSize);
    int factArr[500];
    factArr[0]=1;
    int resultSize = 1;

    // to calculate the answer
    for(int i=2; i<=num; i++){
        resultSize = multiply(i, factArr, resultSize);
    }

    cout<<endl<<"***** Factorial is: ";

    // to print array in reverse order
    for(int i=resultSize-1; i>=0; i++){
        cout<<factArr[i];
    }


}

// helping multiply function
int multiply(int multiplyTo, int * factArr, int resultSize){
    int carry=0;
    //Actual Multpliction in array
    for(int i=0; i<resultSize; i++){
        int product = factArr[i]*multiplyTo+carry;
        factArr[i] = product%10;
        carry = product/10;
    }

    while(carry != 0){
        factArr[resultSize] = carry % 10;
        carry = carry / 10;
        resultSize++;
    }

    return resultSize;
}



// Q.22. Minimum Platforms Problem - GFG



// Q.23. Minimise the heights II - GFG


// Q.24. Majority Element Problem in Array - GFG



// Q.25. Array subset of another array
//optimal approach using hashmaps
bool arraySubsetOfAnother(int * arr1, int * arr2, int size1, int size2){
    //first hash all the values of array 1
    unordered_map<int, int> map;
    for(int i=0; i<size1; i++) map[arr1[i]]++;

    // initialize a variable count so that we can count how many elements are found in hashmap from arr2
    int count = 0;

    //now check if every value is present in the hash or not
    for(int i=0; i<size2; i++){
        if(map[arr2[i]]) count++;
    }

    // if count = size2, means every element of arr2 is found in hasmap
    if(count==size2) return true;
    else return false;
}



int main(){
    int size;
    cout<<endl<<"Enter the size of Array: ";
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cout<<"Enter Elemennt "<<i<<": ";
        cin>>arr[i];
    }

    cout<<endl<<"Array Enetered is: ";
    printArr(arr, size);


    // Q.1. Linear Search
    // cout<<endl<<linearSearch(arr, size, 5);


    // Q.2. Reverse Array
    // reverseArr(arr, size);


    // Q.3. Min and Max
    // findMinMax(arr, size);


    // Q.4. Swap Alternates
    // swapAlternates(arr, size);


    // Q.5. Sort an array of 0s 1s and 2s
    // sortOf012(arr,size);


    // Q.6. Move all negatives to one side of array
    // moveAllNeg(arr, size);


    // Q.7. Find Union and Intersection of two arrays               //problem
    // int arr2[] = {0,2,4,6,8};
    // unionIntersection(arr, arr2, size, 5);


    // Q.8. Cycally rotate an array by 1
    // rotateArr(arr, size);


    // Q.9. Find duplicate in array of N+1
    // cout<<"Duplicate: "<<findDuplicate(arr, size);

    
    // Q.9. Find pair that sum to the given value
    // findPair2(arr, size, 6);
    

    // Q.10. Find triplets that sum to the given value
    // findTriplet2(arr, size, 9);


    // Q.11. Whether array is Palindrome or not
    // cout<<"Is Palindrome: "<<findPalindrome(arr, size);


    // Q.12. Find the min no of swaps to bring elements less than and equal to k together
    cout<<endl<<"Swaps Required: "<<minSwaps(arr,size,5);



    // Q.13. Find the common elements from 3 sorted arrays
    // int arr2[] = {5,43,65,78,78};
    // int arr3[] = {2,5,7,9,10,43,78,78};
    // commonElements(arr, arr2, arr3, size, 5, 8);


    // Q.14. Unique no. of occurences


    // Q.15. Kadane's Algo (to find larget sum of any sub array)
    // cout<<endl<<"Largest Sum Calculated: "<<kadaneAlgo(arr, size);

    // Q.17. First Repeating element
    // cout<<endl<<"First Repeating: "<<findRepeatingElement3(arr, size);

    // Q.18. Find first Non Repeating element
    // cout<<endl<<"First Non Repeating: "<<findNonRepeating2(arr, size);


    // // Q.19. Find Subarrays with equal 0s and 1s
    // findEqual0and11(arr, size);


    // Q.20. Find Subarrays with sum 0
    // findSubarrayWith0Sum1(arr, size);


    // Q.21. Find factorial of large number
    // here you not need to enter any array
    // factorial(5);



    // Q.25. Array subset of another array
    // int arr2[] = {4,6,3,2};
    // cout<<endl<<"***** Is Subset: "<<arraySubsetOfAnother(arr, arr2, size, 4);



    return 0;
}