#include <bits/stdc++.h>
#include<iostream>
#include<limits>
#include<set>
#include<map>
using namespace std;

void printArray(int * arr, int size){
    cout<<endl<<"Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int size;
    cout<<endl<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }



    // // Linear Search
    // int target = 5;
    // bool found = false;
    // for(int i=0; i<size; i++){
    //     if(arr[i]==target) {
    //         found = true;
    //         cout<<endl<<"Found at index location: "<<i;
    //         break;
    //     }
    // }
    // if(!found) cout<<endl<<"Not Found....";


    // // Reverse an Array
    // printArray(arr, size);
    // int sIndex = 0, eIndex = size-1;
    // while(sIndex<eIndex){
    //     swap(arr[sIndex], arr[eIndex]);
    //     sIndex++;
    //     eIndex--;
    // }
    // printArray(arr, size);


    // // Find max and min element in an array
    // int maxi = INT_MIN;
    // int mini = INT_MAX;
    // for(int i=0; i<size; i++){
    //     maxi = max(maxi, arr[i]);
    //     mini = min(mini, arr[i]);
    // }
    // printf("\nMaximum: %d and Mininum: %d",maxi,mini);


    // // Swap alternates in an array
    // printArray(arr, size);
    // for(int i=0; i<size; i=i+2){
    //     if(i<size-1) swap(arr[i], arr[i+1]);
    // }
    // printArray(arr, size);


    // // Sort an Array of 0, 1 and 2
    // printArray(arr,size);
    // int zeroes=0, ones=0, twos=0;
    // //counting number of 0,1,2
    // for(int i=0; i<size; i++){
    //     if(arr[i]==0) zeroes++;
    //     else if(arr[i]==1) ones++;
    //     else if(arr[i]==2) twos++;
    // }
    // //replacing corrospoding elements of array with 0,1,2
    // int index=0;
    // while(zeroes--) arr[index++]=0;
    // while(ones--) arr[index++]=1;
    // while(twos--) arr[index++]=2;
    // printArray(arr, size);



    // // Move all -ve numbers to one side of an array
    // printArray(arr, size);
    // int sIndex=0;
    // for(int i=0; i<size; i++){
    //     if(arr[i]<0){
    //         swap(arr[sIndex],arr[i]);
    //         sIndex++;
    //     }
    // }
    // printArray(arr, size);


    // // Find union and intersection of 2 sorted arrays
    // //Finding intersection
    // int arr2[]= {3,7,10,67};
    // int size2=4;
    // int indexA1=0, indexA2=0;
    // cout<<"\nIntersection is: ";
    // while(indexA1<size && indexA2<size2){
    //     if(arr[indexA1]<arr2[indexA2]) indexA1++;
    //     else if(arr[indexA1]>arr2[indexA2]) indexA2++;
    //     else{
    //         cout<<arr[indexA1]<<"\t";
    //         indexA1++;
    //         indexA2++;
    //     }
    // }
    // //finding union
    // // first print all elements from arr1 and store each element occurence in map
    // cout<<"\nUnion is: ";
    // unordered_map<int,int> map;
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<"\t";
    //     map[arr[i]]++;
    // }
    // //check for each element of array2 if exist in map more already
    // for(int i=0; i<size2; i++){
    //     if(map[arr2[i]]==1) continue;
    //     else cout<<arr2[i]<<"\t";
    // }
    // // finding union - very simple approach, to store every elemnt of every array in a set which do not store duplicate values and is faster (O(1)) as well
    // //storing from array 1
    // set<int> elements;
    // for(int i=0; i<size; i++) elements.insert(arr[i]);
    // for(int i=0; i<size2; i++) elements.insert(arr2[i]);
    // //now printing all elements from set
    // cout<<"\nUnion using Set is: ";
    // for(auto it=elements.begin(); it!=elements.end(); ++it){
    //     cout<<*it<<"\t";
    // }
    // // finding union - general approach
    // indexA1=0, indexA2=0;
    // cout<<"\nUnion using General Approach is : ";
    // while(indexA1<size && indexA2<size2){
    //     if(arr[indexA1]<arr2[indexA2]) {
    //         cout<<arr[indexA1]<<"\t";
    //         indexA1++;
    //     }
    //     else if(arr[indexA1]>arr2[indexA2]) 
    //     {
    //         cout<<arr2[indexA2]<<"\t";
    //         indexA2++;
    //     }
    //     else{
    //         cout<<arr[indexA1]<<"\t";
    //         indexA1++;
    //         indexA2++;
    //     }
    // }
    // //printing rest of the elements from larger array
    // if(size>size2){
    //     for(int i=indexA1; i<size; i++){
    //         cout<<arr[i]<<"\t";
    //     }
    // }
    // else{
    //     for(int i=indexA2; i<size2; i++){
    //         cout<<arr2[i]<<"\t";
    //     }
    // }



    // // Cyclically rotate an array by 1
    // printArray(arr, size);
    // int endElement = arr[size-1];
    // for(int i=size-1; i>=0; i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[0]=endElement;
    // printArray(arr, size);


    //  Find Duplicate in Array of N+1 intigers
    // Brute force approach
    // bool found = false;
    // for(int i=0; i<size; i++){
    //     for(int j=i+1; j<size; j++){
    //         if(arr[i]==arr[j]) 
    //         {
    //             cout<<"\nDuplicate found using brute force: "<<arr[i];
    //             found=true;
    //         }
    //     }
    // }
    // if(!found) cout<<"\nNo Duplicate Found";
    // // Using Hash Maps
    // // Count the occurence of each element
    // found = false;
    // unordered_map<int,int> map;
    // for(int i=0; i<size; i++){
    //     map[arr[i]]++;
    //     if(map[arr[i]]>1) {
    //         found = true;
    //         cout<<"\nDuplicate found using hashmap: "<<arr[i];
    //     }
    // }
    // if(!found) cout<<"\nNo Duplicate Found";
    // // Using set which allow only one unique value to be inserted in them 
    // found = false;
    // set<int> iamset;
    // for(int i=0; i<size; i++){
    //     if(iamset.find(arr[i]) != iamset.end()){
    //         found=true;
    //         cout<<"\nDuplicate Found using Set: "<<arr[i];
    //     }
    //     else{
    //         iamset.insert(arr[i]);
    //     }
    // }
    // if(!found) cout<<"\nNo Duplicate Found";



    // Find a pair that sum to a given value
    // int target=20;
    // bool found = false;
    // //brute force approach
    // for(int i=0; i<size; i++){
    //     for(int j=i+1; j<size; j++){
    //         if(arr[i]+arr[j]==target){
    //             found= true;
    //             printf("\nPair found at %d and %d",i,j);
    //         }
    //     }
    // }
    // if(!found) cout<<"\nNo pair Found";

    // //optimized approach using sorting and two pointers approach
    // found=false;
    // sort(arr, arr+size);
    // int sIndex=0,eIndex=size-1;
    // while(sIndex<eIndex){
    //     if(arr[sIndex]+arr[eIndex]>target) eIndex--;
    //     else if(arr[sIndex]+arr[eIndex]<target) sIndex++;
    //     else{
    //         found=true;
    //         printf("\nPair found using approach 2 are %d and %d",arr[sIndex],arr[eIndex]);
    //         sIndex++;
    //         eIndex--;
    //     }
    // }
    // if(!found) cout<<"\nNo Pair Found using Approach 2";


    // // Check whether the array is palindrome or not
    // int sIndex=0, eIndex=size-1;
    // bool palindrome = true;
    // while(sIndex<eIndex){
    //     if(arr[sIndex]!=arr[eIndex]){
    //         palindrome=false;
    //         cout<<endl<<"Not Palindrome";
    //         break;
    //     }
    //     sIndex++;
    //     eIndex--;
    // }
    // if(palindrome) cout<<endl<<"Array is Palindrome";
    // //another approach using for loop
    // palindrome=true;
    // for(int i=0; i<size/2; i++){
    //     if(arr[i]!=arr[size-i-1]){
    //         palindrome=false;
    //         cout<<endl<<"Not Palindrome using approach 2";
    //         break;
    //     }
    // }
    // if(palindrome) cout<<endl<<"Array is Palindrome using approach 2";
    

    // // Find the minimum number of swaps required to bring the elements less than or equal to k together
    // int num = 5, good = 0;
    // for(int i=0; i<size; i++){
    //     if(arr[i]<=num) good++;
    // }

    // int bad = 0;
    // for(int i=0; i<good; i++){
    //     if(arr[i]>num) bad++;
    // }

    // int sIndex=0, ans=bad;
    // for(int eIndex = good; eIndex<size; eIndex++){
    //     if(arr[sIndex]>bad) bad--;
    //     if(arr[eIndex]>bad) bad++;
    //     ans=min(ans, bad);
    //     sIndex++;
    // }
    // cout<<endl<<"Found Min Swaps Required: "<<ans;


    // Find the largest sum sub array from an array using Kadene Algorithm
    // int sum_so_far=0, ans=INT_MIN, sIndex, eIndex;
    // for(int i=0; i<size; i++){
    //     //calculating sum so far
    //     sum_so_far += arr[i];
    //     //calculate ans
    //     if(ans<sum_so_far){
    //         ans=sum_so_far;
    //         eIndex=i;
    //     }
    //     //if sum so far is less than 0, make sum 0
    //     if(sum_so_far < 0){
    //         sIndex=i+1;
    //         sum_so_far=0;
    //     }
    // }
    // cout<<"\nLargest Sum: "<<ans<<" and array from "<<sIndex<<" to "<<eIndex;


    // Find Common Elements in 3 sorted arrays
    //brureforce approach
    bool found = false;
    int arr2[] = {3,5,7,8,9}, size2 = 5;
    int arr3[] = {2,3,4,7,8,12,45}, size3= 7;
    for(int i=0; i<size; i++){
        for(int j=0; j<size2; j++){
            for(int k=0; k<size3; k++){
                if(arr[i]==arr2[j] && arr2[j]==arr3[k]){
                    found=true;
                    cout<<"\nFound Common Element: "<<arr[i];
                }
            }
        }
    }
    if(!found) cout<<endl<<"No Common elements found";













    return 0;
}