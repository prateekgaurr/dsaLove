#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
    // Get the size of the array first
    cout<<"Enter the number of rows and columns: ";
    int rows, cols;
    cin>>rows>>cols;

    int arr[rows][cols];

    // //Getting the values
    for(int r=0; r<rows; r++){
        cout<<endl<<"Enter elemnts for Row "<<r<<" : ";
        for(int c=0; c<cols; c++) {cin>>arr[r][c];}
    }



    //Printing the array 
    cout<<endl<<endl<<"**********Array is**********"<<endl;
    for(int r=0; r<rows; r++){
        for(int c=0; c<cols; c++) cout<<arr[r][c]<<"\t";
        cout<<endl<<endl;
    }






    return 0;
}