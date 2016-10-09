#ifndef VectorClass_H
#define VectorClass_H

#include <iostream>

using namespace std;

template<class T>
class VectorClass {

private:

public:
	VectorClass();
	VectorClass(int maxSize);
	~VectorClass();

	int maxSize;
	int counter;
	T* arr;

	void show();
	void pop();
	void push(T element);
	void replace(int index, T element);
	int isPresent(T searchElement);


};

#endif

