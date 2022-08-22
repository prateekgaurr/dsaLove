#include <iostream>
using namespace std;


int main() {
	int rows, cols;
	cout << endl << "Enter the no. of Rows and Columns: ";
	cin >> rows >> cols;
	int arr[rows][cols];

	// Entering the elements
	for (int i = 0; i < rows; i++) {
    printf("\nEnter elemts for Row %d: ",i);
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
		}
	}

	// Printing the Array
	printf("\n\n*********** Array *************\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << " " << arr[i][j] << "\t";
		}
		cout << endl << endl;
	}


    // // Transpose of a Matrix
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<i; j++){
    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }

    // // Printing the Array after transpose
	// printf("\n\n*********** Array *************\n");
	// for (int i = 0; i < rows; i++) {
	// 	for (int j = 0; j < cols; j++) {
	// 		cout << " " << arr[i][j] << "\t";
	// 	}
	// 	cout << endl << endl;
	// }


    // // Reverse the rows so that 90 D CW rotation can be seen
    // for (int i = 0; i < rows; i++) {
	// 	int sIndex=0,eIndex=cols-1;
    //     while(sIndex<eIndex){
    //         swap(arr[i][sIndex], arr[i][eIndex]);
    //         sIndex++;
    //         eIndex--;
    //     }
	// }


    // // Reverse the cols so that 90 D ACW rotation can be seen
    // for(int i=0; i<cols; i++){
    //     int sIndex=0, eIndex=rows-1;
    //     while(sIndex<eIndex){
    //         swap(arr[sIndex][i], arr[eIndex][i]);
    //         sIndex++;
    //         eIndex--;
    //     }
    // }

    // // Printing the Array after 90 Rotation
	// printf("\n\n*********** Array *************\n");
	// for (int i = 0; i < rows; i++) {
	// 	for (int j = 0; j < cols; j++) {
	// 		cout << " " << arr[i][j] << "\t";
	// 	}
	// 	cout << endl << endl;
	// }




    // // Spiral Print
    // cout<<endl<<endl<<"***** Spiral Print:  ";
    // int totalElements = rows*cols;
    // int firstRow=0, lastRow=rows-1, firstCol=0, lastCol=cols-1;
    // while(totalElements){

    //     //1. Printing first Row
    //     for(int i=firstCol; i<=lastCol; i++){
    //         cout<<arr[firstRow][i]<<"\t";
    //         totalElements--;
    //     }
    //     firstRow++;

    //     //2. Printing last col
    //     for(int i=firstRow; i<=lastRow; i++){
    //         cout<<arr[i][lastCol]<<"\t";
    //         totalElements--;
    //     }
    //     lastCol--;

    //     // 3. Printing last row
    //     if(firstRow<lastRow){
    //         for(int i=lastCol; i>=firstCol; i--){
    //             cout<<arr[lastRow][i]<<"\t";
    //             totalElements--;
    //         }
    //         lastRow--;
    //     }

    //     // 4. Printing 1st Column
    //     if(firstCol<lastCol){
    //         for(int i=lastRow; i>=firstRow; i--){
    //         cout<<arr[i][firstCol]<<"\t";
    //         totalElements--;
    //     }
    //     firstCol++;
    //     }




    // Wave Print
    cout<<endl<<endl<<"********* Wave Print: ";
    for(int i=0; i<rows; i++){
        if(i%2==0){ // This is Even no of row and have to be travelled correct
            for(int j=0; j<cols; j++){
                cout<<arr[i][j]<<"\t";
            }
        }
        else{ // This is Odd no of row and have to be travelled in reverse order
            for(int j=cols-1; j>=0; j--){
                cout<<arr[i][j]<<"\t";
            }
        }
    }







    

  
	return 0;
}