#include<iostream>
#include <string>
using namespace std;

typedef void (*funcpointer) (int* A);


void inputArray(int* A);
void outputArray(int* A);
void sortASC(int* a);
void sortDESC(int* a);
funcpointer getFunc(string& op);

int main() {
	int n;
	int* A = new int[10];
	string op;
	
	inputArray(A);
	outputArray(A);
	getFunc(op)(A);
	outputArray(A);

	delete [] A;
	return 0;
}

void inputArray(int* A) {
	cout << "InArray" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> A[i];
	}
}

void outputArray(int* A) {
	cout << "OutArray" << endl;
	for (int i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}
void sortASC(int* A) {
	for (int i = 0; i < 10 - 1; i++) {
		for (int j = i; j < 10; j++) {
			if (A[i] > A[j])
				swap(A[i], A[j]);
		}
	}
}
void sortDESC(int* A) {
	for (int i = 0; i < 10 - 1; i++) {
		for (int j = i; j < 10; j++) {
			if (A[i] < A[j])
				swap(A[i], A[j]);
		}
	}
}
funcpointer getFunc(string& op){
	cout << "Enter your option: ";
	cin >> op;
	if (op == "ASC")
		return sortASC;
	if (op == "DESC")
		return sortDESC;
}

