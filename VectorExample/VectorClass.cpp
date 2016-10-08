#include "VectorClass.h"

using namespace std;

template<class T>
VectorClass<T>::VectorClass() {
	maxSize = 5;
	counter = 0;

}

template<class T>
VectorClass<T>::VectorClass(int maxSize) {
	this->maxSize = maxSize;
	counter = 0;
}

template<class T>
VectorClass<T>::~VectorClass() {


}

template<class T>
void VectorClass<T>::show() {

	cout << "My maxSize is: " << maxSize << endl;
	cout << "My counter is: " << counter << endl;
}

template<class T>
void VectorClass<T>::pop() {

}

template<class T>
void VectorClass<T>::push(T element) {
	
}

template<class T>
void VectorClass<T>::replace() {

}
