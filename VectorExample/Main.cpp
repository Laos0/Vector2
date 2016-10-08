#include <iostream>
#include "VectorClass.h"

using namespace std; 


int main() {

	VectorClass vector(10);

	vector.show();
	vector.pop();
	vector.push();
	vector.replace();


	cout << "Hello" << endl;

	system("pause");
}