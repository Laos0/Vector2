#include "VectorClass.h"

using namespace std;


VectorClass::VectorClass() {
	maxSize = 5;
	counter = 0;

}

VectorClass::VectorClass(int maxSize) {
	this->maxSize = maxSize;
	counter = 0;
}

VectorClass::~VectorClass() {


}

void VectorClass::show() {

	cout << "My maxSize is: " << maxSize << endl;
	cout << "My counter is: " << counter << endl;
}

void VectorClass::pop() {

}

void VectorClass::push() {

}

void VectorClass::replace() {

}