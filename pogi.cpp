#include <iostream>
#include <math.h>
using namespace std;

void myFunction();

int main(){

	myFunction();
	
	return 0;
	
}

void myFunction(){
	
	int x = 100;
	int &anotherOne = x;
	int* ptr = &x;
	
	cout << x << endl; // Normal String
	cout << anotherOne << endl; // Reference
	cout << &x << endl; // Memory Address
	cout << ptr << endl; // Pointer
	
	*ptr = 200; // Change Value
	cout << *ptr << endl; // Dereference Operator
	cout << x;
	
}

