#include <iostream>
#include "VectorClass.h"
#include "VectorClass.cpp"


using namespace std; 


int main() {

	VectorClass<int> vector(5);

	vector.push(9);
	vector.push(40);
	vector.push(92);
	vector.push(32);
	vector.push(80);
	vector.push(7000);
	vector.pop();
	vector.pop();
	vector.pop();
	vector.replace(44, 1);
	
	int searchedElement = 39;
	int answer = vector.isPresent(searchedElement);
	if (answer == 0) {

		cout << "Number found: " << searchedElement << endl;
	}
	else {

		cout << "Number cannot be found." << endl;
	}

	vector.show();
	/*
	vector.pop();
	vector.push();
	vector.replace();
	*/


	cout << "Hello" << endl;

	system("pause");
}