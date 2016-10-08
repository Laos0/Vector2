#ifndef VectorClass_H
#define VectorClass_H

#include <iostream>

using namespace std;

class VectorClass {

private:

public:
	VectorClass();
	VectorClass(int maxSize);
	~VectorClass();

	int maxSize;
	int counter;

	void show();

	void pop();
	void push();
	void replace();

};







#endif

