//Rene Tamez
//
//This project will take in an array of 10 numbers, and is to take those values, square them, and then put them into another array
// They arrays will be out-putted at the very end to show the original numbers
// and then to show the squared numbers.


#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 10;

int main() {

	//This segment will take in the the 10 values

	int arr[MAX];
	int number;
	cout << "Please enter a totoal of 10 integers: " << "\n\n";
	int index = 0;
	int count = 1;
	for (index; index < MAX; index++)
	{
		cout << count << ":\t";
		cin >> number;
		cout << "\n";
		count++;
		arr[index] = number;
		cout << arr[index] << "\n \n";
		//cout << "\n \n \n";
		//cout << arr[index];
	}

	//This next segment will quare the values in the first array and square them and then put them into a different array.
	int arrSquare[MAX];
	int number2;

	int index2 = 0;
	int count2 = 1;
	for (index2; index2 < MAX; index2++)
	{
		number2 = pow(arr[index2], 2);
		arrSquare[index2] = number2;
		
		cout << "\n\n\n";
		cout << count2 << ":\n";
		cout << arrSquare[index2];
		count2++;
	}

	//This next segment will print out the two arrays

	int counter = 1;
	int location = 0;
	cout << "\n";
	cout << "This is the array before it is squared: \n";
	for (location; location < MAX; location++)
	{
		
		cout << counter << ":" << "  ";
		cout << arr[location] << "  ";
		counter++;
	}

	cout << "\n\n";

	location = 0;
	counter = 1;
	cout << "This is the array after it has been squared: ";
	for (location; location < MAX; location++)
	{

		cout << counter << ":" << "  ";
		cout << arrSquare[location] << "   ";
		counter++;


	}


}