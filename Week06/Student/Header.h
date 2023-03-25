#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
	char* id;
	char* name;
	double avr;
};

int check(char* str);
void inName(char*& name);
void inStudent(Student& a);
void outStudent(Student a);
void inArrayofStudent(Student* &A, int& n);
void outArrayofStudent(Student* A, int n);
Student* searchMaxAvr(Student* A, int n);