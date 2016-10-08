#include <iostream>
#include "VectorClass.h"
#include "VectorClass.cpp"

using namespace std; 


int main() {

	VectorClass<int> vector(10);

	vector.show();
	/*
	vector.pop();
	vector.push();
	vector.replace();
	*/


	cout << "Hello" << endl;

	system("pause");
}