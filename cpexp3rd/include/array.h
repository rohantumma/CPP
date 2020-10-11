#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <typeinfo>

// define a clas array of type T
// the type is not know yet and will
// be defined by instantiation
// of object of class array<T> from main
template< typename T > class array
{
public:
array();
virtual ~array();

private:
	int size;
	T *myarray;
public:
// constructor with user pre-defined size
	array (int s) {
	size = s;
	myarray = new T [size];
	}
// calss array member function to set element of myarray
// with type T values
void setArray ( int elem, T val) {
	myarray[elem] = val;
	}

// for loop to display all elements of an array
void getArray () {
     for ( int j = 0; j < size; j++ ) {
// typeid will retriev a type for each value
        cout << setw( 7 ) << j << setw( 13 ) << myarray[ j ]
<< " type: " << typeid(myarray[ j ]).name() << endl;
	}
	cout << "-----------------------------" << endl;
	}
};

#endif // ARRAY_H
