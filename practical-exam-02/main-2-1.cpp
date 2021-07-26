#include <iostream>
using namespace std;

extern int *readNumbers(int n) ;
void semesterNames(int* semesters,int length);

int main()
{
	int *semesters = readNumbers(3);
	semesterNames(semesters,3);
	delete[] semesters;
	return 0;
}
