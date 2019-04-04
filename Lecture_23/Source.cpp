// Lecture_23 
// 2D Arrays

#include<iostream>
#include<string>

using namespace std;

int main() {
	/*
	- Arrays have the ability to be defined in the same way that matrices are defined. The size can be defined as IxJ where I and J are any number of columns and rows that fit within the constraint of the memory
	- All elements must be of the same type, the same as 1D arrays, 2D arrays only support a single variable type across the entire index of elements
	- declared by: type name[number of rows][number of columns];
	- every call for an element of a 2D array must contain a reference to both row and column or it will throw a runtime error because the compiler does not know how to output an entire row in a single call.
	- always passed by reference to functions
	*/

	// During the declaration you can define the rows, columns, and data organization as follows:
	int multiArr[3][3] = { { 1,2,3 }, {4,5,6} ,{7,8,9} }; // This declares an array of 3 rows and 3 columns and initializes the numbers in each row in order as shown.

	int tooBigArr[4][5] = { { 1,2,3 }, {4,5,6} ,{7,8,9} }; // This creates an array 4x5 and fills the first three columns of the first three rows with the data and populates the rest with 0 since we do not have enough data to fill it

	cout << multiArr[0][1] << endl; // calls the element stored in the first row, second column: 2

	// Arrays can be initialized using a list and it will define the number of rows needed but columns must always be defined
	int listArr[][3] = { 1,2,3,4,5,6,7,8,9 }; // this will result in three rows and three columns as the compiler will slot each item until the row is full and create as many rows as needed to fit the initialization data

	// To fill a 2D array we will need two for loops to access all of the elements

	int fillArr[3][3]; // Declares a 3x3 array with no initialization

	// To access each element we must use a for loop to cycle through the rows and another inside that to cycle through each column as we are on each row.
	for (int i = 0; i < 3; i++) { // defines the row number as the 'i' entry
		for (int j = 0; j < 3; j++) { // defines the column number as the 'j' entry
			fillArr[i][j] = i + j;
		}
	}

	// Cycles through each column then moves to the next row and continues until all elements of the array have been printed
	cout << "Three rows and Three columns: " << endl;
	for (int i = 0; i < 3; i++) { // rows
		for (int j = 0; j < 3; j++) { // columns
			cout << fillArr[i][j] << " "; // outputs the current element being considered. This results in the array being output as a matrix we are used to seeing as a 3x3 format.
		}
		cout << endl; // creates a new line at the end of every row for proper formating of the array representation.
	}

	// To access the data in a single row we can use the same format as above but using a fixed 'i' value rather than an incrementing one
	cout << "This is the third row of the array: " << endl;
	for (int j = 0; j < 3; j++) {
		cout << fillArr[2][j] << " ";
	}
	cout << endl;
	// This method also works for columns but we naturally hold the 'j' value constant and vary the 'i' value
	cout << "This is the second column of the array: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << fillArr[i][1] << "\n";
	}
	



	system("pause");
	return 0;
}

