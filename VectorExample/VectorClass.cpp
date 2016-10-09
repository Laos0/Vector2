#include "VectorClass.h"

using namespace std;

template<class T>
VectorClass<T>::VectorClass() {
	maxSize = 5;
	counter = 0;
	arr = new T[5];

}

template<class T>
VectorClass<T>::VectorClass(int maxSize) {
	this->maxSize = maxSize;
	counter = 0;
	arr = new T[this->maxSize];
}

template<class T>
VectorClass<T>::~VectorClass() {


}

template<class T>
void VectorClass<T>::show() {

	cout << "My maxSize is: " << maxSize << endl;
	cout << "My counter is: " << counter << endl;
	for (int i = 0; i < counter; i++) {
		cout << arr[i] << ", ";


	}
}

template<class T>
void VectorClass<T>::pop() {
	counter--;
}


template<class T>
void VectorClass<T>::push(T element) {
	if (counter < maxSize) {

		arr[counter] = element;
		counter++;

	}
}

template<class T>
void VectorClass<T>::replace(int index,T element ) {
	if (index < maxSize && index > -1) {
		arr[index] = element;
	}

}

template<class T>
int VectorClass<T>::isPresent(T searchElement) {

	for (int i = 0; i < counter; i++) {
		if (arr[i] == searchElement)
		{
			return 0;
		}
	}
	return 1;
}


