#include "Header.h"

int main() {
	Student *A;
	int n;
	inArrayofStudent(A, n);
	outArrayofStudent(A, n);
	Student* max;
	outStudent(searchMaxAvr(A, n));
	return 0;
}