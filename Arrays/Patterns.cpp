// #include <iostream>
// using namespace std;

// // 1. HALF PYRAMID
// void pattern1(int n) {
// 	cout << endl << "PATTERN 1 : HALF PYRAMID" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		for (int col = 1; col <= row; col++) {
// 			cout << "  *";
// 		}
// 		cout << endl;
// 	}
// }

// // 2. INVERTED HALF PYRAMID
// void pattern2(int n) {
// 	cout << endl << endl << "PATTERN 2 : INVERTED HALF PYRAMID" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		for (int col = 1; col <= (n - row) + 1; col++) {
// 			cout << " *";
// 		}
// 		cout << endl;
// 	}
// }

// // 3. HALLOW INVERTED HALF PYRAMID
// void pattern3(int n) {
// 	cout << endl << endl << "PATTERN 3 : HOLLOW INVERTED HALF PYRAMID" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		if (row == 1 || row == n) {
// 			for (int stars = 1; stars <= n - row + 1; stars++) {
// 				cout << " *";
// 			}
// 		} else {
// 			cout << " *";
// 			for (int space = 1; space <= n - row - 1; space++) {
// 				cout << "  ";
// 			}
// 			cout << " *";
// 		}
// 		cout << endl;
// 	}
// }

// // 4. FULL PYRAMID
// void pattern4(int n) {
// 	cout << endl << endl << "PATTERN 4 : FULL PYRAMID" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		for (int space = 1; space <= n - row; space++) {
// 			cout << " ";
// 		}
// 		for (int stars = 1; stars <= row; stars++) {
// 			cout << "* ";
// 		}
// 		cout << endl;
// 	}
// }

// // 5. INVERTED FULL PYRAMID
// void pattern5(int n) {
// 	cout << endl << endl << "PATTERN 5 : INVERTED FULL PYRAMID" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		for (int space = 1; space <= row + 1; space++) {
// 			cout << " ";
// 		}
// 		for (int stars = 1; stars <= n - row + 1; stars++) {
// 			cout << " *";
// 		}
// 		cout << endl;
// 	}
// }

// // 6. HOLLOW FULL PYRAMID
// void pattern6(int n) {
// 	cout << endl << endl << "PATTERN 6 : HOLLOW HALF PYRAMID" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		// if last row
// 		if (row == n) {
// 			for (int star = 1; star <= row + 1; star++) {
// 				cout << " *";
// 			}
// 		}
// 		// if first row
// 		else if (row == 1) {
// 			for (int space = 1; space <= n; space++) {
// 				cout << " ";
// 			}
// 			cout << " *" << endl;
// 		}
// 		// if any other row
// 		else {
// 			// for outside left spaces
// 			for (int space = 1; space <= n - row; space++) {
// 				cout << " ";
// 			}
// 			// for left star line
// 			cout << " *";
// 			// for middle space
// 			for (int space = 1; space <= 2 * row - 1; space++) {
// 				cout << " ";
// 			}
// 			// for right star line and space on every row end
// 			cout << " *" << endl;
// 		}
// 	}
// }

// // 7. HALF PYRAMID WITH NUMBERS
// void pattern7(int n) {
// 	cout << endl << endl << "PATTERN 7 : HALF PYRAMID WITH NUMBERS" << endl;
// 	for (int row = 0; row < n; row++) {
// 		for (int col = 0; col <= row; col++) {
// 			cout << " " << col + 1;
// 		}
// 		cout << endl;
// 	}
// }

// // 8. INVERTED HALF PYRAMID WITH NUMBERS
// void pattern8(int n) {
// 	cout << endl
// 		 << endl
// 		 << "PATTERN 8 : INVERTED HALF PYRAMID WITH NUMBERS" << endl;
// 	for (int row = 0; row < n; row++) {
// 		for (int col = 0; col < n - row; col++) {
// 			cout << " " << col + 1;
// 		}
// 		cout << endl;
// 	}
// }

// // 9. HOLLOW HALF PYRAMID WITH NUMBERS
// void pattern9(int n) {
// 	cout << endl
// 		 << endl
// 		 << "PATTERN 9 : HOLLOW HALF PYRAMID WITH NUMBERS" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		// if first or last row
// 		if (row == 1 || row == n) {
// 			// for printing 1 in first row and numbers till col count in last
// 			// row
// 			for (int col = 1; col <= row; col++) {
// 				cout << " " << col;
// 			}
// 		}
// 		// if any other row(2 to n-1)
// 		else {
// 			// printing 1 initially
// 			cout << " 1";
// 			// for spaces in middle
// 			for (int space = 1; space <= row - 2; space++) {
// 				cout << "  ";
// 			}
// 			// printing row number for the outer edge
// 			cout << " " << row;
// 		}
// 		// new line after each row
// 		cout << endl;
// 	}
// }

// // 10. FULL PYRAMID WITH NUMBERS
// void pattern10(int n) {
// 	cout << endl << endl << "PATTERN 10 : FULL PYRAMID WITH NUMBERS" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		// for spaces in beginning
// 		for (int space = 1; space <= n - row; space++) {
// 			cout << "  ";
// 		}
// 		int k = row;
// 		// for numbers in first triangle
// 		for (int nums = 1; nums <= row; nums++) {
// 			cout << " " << k++;
// 		}
// 		// for numbers in another triange
// 		k = k - 2;
// 		for (int nums = 1; nums < row; nums++) {
// 			cout << " " << k++;
// 		}
// 		// for new line in end of every row
// 		cout << endl;
// 	}
// }

// // 11. HOLLLOW FULL PYRAMID WITH NUMBERS
// void pattern11(int n) {
// 	cout << endl
// 		 << endl
// 		 << "PATTERN 11 : HOLLOW HALF PYRAMID WITH NUMBERS" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		if (row == n || row == 1) {
// 			for (int last = 1; last <= row; last++) {
// 				cout << " " << last;
// 			}
// 		}
// 		// for initial spaces
// 		for (int space = 1; space <= n - row; space++) {
// 			cout << " ";
// 		}
// 		// for printing 1 as left edge
// 		cout << "1";
// 		// for middle spaces
// 		for (int spaces = 1; spaces <= 2 * row - 1; spaces++) {
// 			cout << " ";
// 		}
// 		// for every row expect last row
// 		if (row < n) {
// 			// for printing outer edge as row number
// 			cout << row;
// 		}
// 		// new line after each row
// 		cout << endl;
// 	}
// }

// // 12. HOLLOW INVERTED HALF PYRAMID
// void pattern12(int n) {
// 	cout << endl
// 		 << endl
// 		 << "PATTERN 12 : HOLLOW INVERTED HALF PYRAMID WITH NUMBERS" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		// print 1-5 at first place
// 		cout << row;
// 		if (row == 1) {
// 			for (int topLine = 2; topLine <= n; topLine++) {
// 				cout << " " << topLine;
// 			}
// 		}
// 		// all other rows
// 		else {
// 			for (int spaces = 1; spaces <= n - row - 1; spaces++) {
// 				cout << "  ";
// 			}
// 			cout << n;
// 		}
// 		cout << endl;
// 	}
// }

// // 13. PALINDROME PYRAMID 1
// void pattern13(int n) {
// 	cout << endl << endl << "PATTERN 13 : PALINDROME PYRAMID 1" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		int k = 1;
// 		// for traingle 1
// 		for (int triangle1 = 1; triangle1 <= row; triangle1++) {
// 			cout << " " << k++;
// 		}
// 		// for another triangle
// 		k = k - 2;
// 		for (int triangle2 = 1; triangle2 <= row - 1; triangle2++) {
// 			cout << " " << k--;
// 		}
// 		// new line on every row end
// 		cout << endl;
// 	}
// }

// // 14. PALINDROME PYRAMID ALPHABET TYPE
// void pattern14(int n) {
// 	cout << endl
// 		 << endl
// 		 << "PATTERN 14 : PALINDROME PYRAMID WITH ALPHABETS" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		int myChar = 65;
// 		// for triangle1 of alphabets
// 		for (int triangle1 = 1; triangle1 <= row; triangle1++) {
// 			cout << " " << char(myChar++);
// 		}
// 		myChar = myChar - 2;
// 		// for triangle 2 of alphabets
// 		for (int triangle2 = 1; triangle2 <= row - 1; triangle2++) {
// 			cout << " " << char(myChar--);
// 		}
// 		// new line at every row end
// 		cout << endl;
// 	}
// }

// // 15. PYRAMID NUMERIC TYPE
// void pattern15(int n) {
// 	cout << endl << endl << "PATTERN 15 : PYRAMID NUMBERIC TYPE" << endl;
// 	for (int row = 1; row <= n; row++) {
// 		// for first spaces
// 		for (int space = 1; space <= n - row; space++) {
// 			cout << "  ";
// 		}
// 		int k = 1;
// 		// for first triange
// 		for (int col = 1; col <= row; col++) {
// 			cout << " " << k++;
// 		}
// 		// for another triange
// 		k = k - 2;
// 		for (int col = 1; col <= row - 1; col++) {
// 			cout << " " << k--;
// 		}
// 		// new line after every row
// 		cout << endl;
// 	}
// }

// // 16. 
// void pattern16(int n) {
// 	cout << endl << endl << "PATTERN 16 : PENDING" << endl;
// }

// // 17. SOLID DIAMOND
// void pattern17(int n) {
// 	cout << endl << endl << "PATTERN 17 : SOLID DIAMOND" << endl;
// 	// for upper half 5 rows
// 	for (int row = 1; row <= n; row++) {
// 		// for start spaces
// 		for (int space = 1; space <= n - row; space++) {
// 			cout << " ";
// 		}
// 		// for stars
// 		for (int stars = 1; stars <= row; stars++) {
// 			cout << " *";
// 		}
// 		// new line for every new row
// 		cout << endl;
// 	}
// 	// for lower half rows
// 	for (int row = 1; row <= n; row++) {
// 		// for spaces
// 		for (int space = 1; space <= row - 1; space++) {
// 			cout << " ";
// 		}
// 		// for stars
// 		for (int stars = 1; stars <= n - row + 1; stars++) {
// 			cout << " *";
// 		}
// 		// new line after each row
// 		cout << endl;
// 	}
// }

// // 18. HOLLOW DIAMOND
// void pattern18(int n) {
// 	cout << endl << endl << "PATTERN 18 : HOLLOW DIAMOND" << endl;
// 	// for upper triangle
// 	for (int row = 1; row <= n; row++) {
// 		// for first spaces
// 		for (int space = 1; space <= n - row; space++) {
// 			cout << " ";
// 		}
// 		// for left stars layer
// 		cout << "*";
// 		// or inner space
// 		for (int space = 1; space <= 2 * row - 1; space++) {
// 			cout << " ";
// 		}
// 		// for rightmost star layer
// 		cout << "*";
// 		// new line after each row
// 		cout << endl;
// 	}
// 	// for lower half triangle
// 	for (int row = 1; row <= n; row++) {
// 		// for outer spaces
// 		for (int space = 1; space <= row - 1; space++) {
// 			cout << " ";
// 		}
// 		// for left layer of stars
// 		cout << "*";
// 		// for inner spaces
// 		for (int space = 1; space >= 2 * row - 1; space--) {
// 			cout << " ";
// 		}
// 		// for outermost star layer
// 		cout << "*";
// 		// for new line in every new row
// 		cout << endl;
// 	}
// }

// // 19. SOLID HALF DIAMOND
// void pattern19(int n) {
// 	cout << endl << endl << "PATTERN 19 : SOLID HALF DIAMOND" << endl;
// 	// for upper half triangle
// 	for (int row = 1; row <= n - 1; row++) {
// 		// printing *
// 		for (int stars = 1; stars <= row; stars++) {
// 			cout << " *";
// 		}
// 		// new line after each row
// 		cout << endl;
// 	}
// 	// for lower half triangle
// 	for (int row = 1; row <= n; row++) {
// 		// printing stars
// 		for (int stars = 1; stars <= n - row + 1; stars++) {
// 			cout << " *";
// 		}
// 		// new line after each row
// 		cout << endl;
// 	}
// }

// // 20. SOLID HALF DIAMOND 1
// void pattern20(int n) {
// 	cout << endl << endl << "PATTERN 20 : SOLID HALF DIAMOND 1" << endl;
// 	// for first half triangle
// 	for (int row = 1; row <= n; row++) {
// 		for (int col = 1; col <= row; col++) {
// 			cout << " " << row + 2;
// 		}
// 		// next line after each row
// 		cout << endl;
// 	}
// 	// printing 2nd half triange
// 	for (int row = 1; row <= n - 1; row++) {
// 		for (int col = n - 1; col >= row; col--) {
// 			cout << " " << row + 4;
// 		}
// 		// new line after each row end
// 		cout << endl;
// 	}
// }

// // 21. SOLID HALF DIAMOND 2
// void pattern21(int n) {
// 	cout << endl << endl << "PATTERN 21 : SOLID HALF DIAMOND 2" << endl;
// }

// // 22. SOLID HALF DIAMOND 3
// void pattern22(int n){
//   cout << endl << endl << "PATTERN 22 : SOLID HALF DIAMOND 3" << endl;
// }

// // 23. SOLID HALF DIAMOND 4
// void pattern23(int n){
//   cout << endl << endl << "PATTERN 23 : SOLID HALF DIAMOND 4" << endl;
// }

// // 24. (6) PYRAMID HALF WITH COUNTING
// void pattern24(int n) {
// 	cout << endl
// 		 << endl
// 		 << "PATTERN 24 : HALF PYRAMID WITH REGULAR COUNTING" << endl;
// 	int count = 1;
// 	for (int row = 1; row <= n; row++) {
// 		// print elements in each column equal to row number
// 		for (int col = 1; col <= row; col++) {
// 			cout << " " << count++;
// 		}
// 		// new line after each row
// 		cout << endl;
// 	}
// }

// // 25. (7) HALF PYRAMID WITH COUNTING AND REVERSE
// void pattern25(int n){
//   cout << endl << endl << "PATTERN 25 : HALF PYRAMID WITH COUNTING AND REVERSE" << endl;
// }

// // 26. (8) BOUNDRIES OF STARS FOR DIAMOND
// void pattern26(int n) {
// 	cout << endl
// 		 << endl
// 		 << "PATTERN 26 : ONLY BOUNDRIES AS RECT FOR A DIAMOND" << endl;
// 	// printing 1st half
// 	for (int row = 1; row <= n; row++) {
// 		// printing initial stars pyramid
// 		for (int stars = 1; stars <= n - row + 1; stars++) {
// 			cout << "* ";
// 		}
// 		// printing middle spaces
// 		for (int spaces = 1; spaces <= (row - 1) * 2; spaces++) {
// 			cout << "  ";
// 		}
// 		// printing last pyramid
// 		for (int stars = 1; stars <= n - row + 1; stars++) {
// 			cout << "* ";
// 		}
// 		// new line after each row
// 		cout << endl;
// 	}
// 	// printing 2nd half
// 	for (int row = 1; row <= n; row++) {
// 		// printing initial stars
// 		for (int stars = 1; stars <= row; stars++) {
// 			cout << "* ";
// 		}
// 		// for middle spaces
// 		for (int spaces = 1; spaces <= (n - row) * 2; spaces++) {
// 			cout << "  ";
// 		}
// 		// for last stars
// 		for (int stars = 1; stars <= row; stars++) {
// 			cout << "* ";
// 		}
// 		// printing next line after each row
// 		cout << endl;
// 	}
// }

// // 27. (9) LAST ONE - N SHAPE SOLID
// void pattern27(int n) {
// 	cout << endl << endl << "PATTERN 27 : N SHAPE" << endl;
// 	// for first half
// 	for (int row = 1; row <= n; row++) {
// 		// for printing stars
// 		for (int stars = 1; stars <= row; stars++) {
// 			cout << "* ";
// 		}
// 		// for middle spaces
// 		for (int space = 1; space <= (n - row) * 2; space++) {
// 			cout << "  ";
// 		}
// 		// for stars
// 		for (int stars = 1; stars <= row; stars++) {
// 			cout << "* ";
// 		}
// 		// new line after each row
// 		cout << endl;
// 	}
// 	// for second half
// 	for (int row = 1; row <= n; row++) {
// 		// for initial stars
// 		for (int stars = 1; stars <= n - row + 1; stars++) {
// 			cout << "* ";
// 		}
// 		// for middle spaces
// 		for (int space = 1; space <= (row - 1) * 2; space++) {
// 			cout << "  ";
// 		}
// 		// for stars
// 		for (int stars = 1; stars <= n - row + 1; stars++) {
// 			cout << "* ";
// 		}
// 		// new line after each row
// 		cout << endl;
// 	}
// }

// int main() {
// 	int n;
// 	cout << "Enter n = ";
// 	cin >> n;

// 	pattern1(n);
// 	pattern2(n);
// 	pattern3(n);
// 	pattern4(n);
// 	pattern5(n);
// 	pattern6(n); //
// 	pattern7(n);
// 	pattern8(n);
// 	pattern9(n);
// 	pattern10(n);
// 	pattern11(n); //
// 	pattern12(n); //
// 	pattern13(n);
// 	pattern14(n);
// 	pattern15(n);
// 	pattern16(n); //
// 	pattern17(n);
// 	pattern18(n); //
// 	pattern19(n);
// 	pattern20(n);
// 	pattern21(n); //
// 	pattern22(n); //
// 	pattern23(n); //
// 	pattern24(n);
// 	pattern25(n); //
// 	pattern26(n);
// 	pattern27(n);

// 	return 0;
// }
