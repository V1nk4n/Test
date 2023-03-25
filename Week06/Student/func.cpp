#include "Header.h"

int check(char* str) {
	if (strlen(str) != 7) return 0;
	for (int i = 0; i < strlen(str); i++) {
		if (!(str[i] >= '0' && str[i] <= '9'))
			return 0;
	}
	return 1;
}
void inName(char*& name) {
	char Temp[40];
	cin.ignore(40, '\n');
	cin.get(Temp, 40, '\n');
	name = (char*)malloc((strlen(Temp) * sizeof(char))+1);
	strcpy_s(name, strlen(Temp)+1, Temp);
}void adjustName(char* name) {
	for (int i = 0; i < strlen(name); i++) {
		if (name[i] == ' ' && name[i + 1] >= 'a' && name[i + 1] <= 'z')
			name[i + 1] -= 32;
	}
}
void inStudent(Student& a) {
	do {
		cout << "Input id: ";
		inName(a.id);
	} while (check(a.id)!=1);
	cout << "Input name: "; inName(a.name); adjustName(a.name);
	cout << "Input avr: ";  cin >> a.avr;
}
void outStudent(Student a) {
	cout << a.id << "\t" << a.name << "\t" <<fixed<<setprecision(2)<< a.avr << endl;
}
void inArrayofStudent(Student*& A, int& n) {
	cout << "Input number of student: "; cin >> n;
	A = new Student[n];
	for (int i = 0; i < n; i++) {
		cout << "Student " << i << endl;
		inStudent(A[i]);
	}
}
void outArrayofStudent(Student* A, int n) {
	for (int i = 0; i < n; i++)
		outStudent(A[i]);
}
Student* searchMaxAvr(Student* A, int n) {
	Student* max;
	//Tim max
	//Tim so luong max
	//Dua vao danh sach max
}