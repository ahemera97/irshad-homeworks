#include<iostream>
using namespace std;

int main()
{
	string name1, name2;
	int id1,id2;
	double grade1, grade2, grade_avg;


	cout << "Enter the 1st student's name: ";
	cin >> name1;
	cout << "His ID: ";
	cin >> id1;
	cout << "His grade: ";
	cin >> grade1;
	cout << "Enter the 2nd student's name: ";
	cin >> name2;
	cout << "His ID: ";
	cin >> id2;
	cout << "His grade: ";
	cin >> grade2;
	grade_avg = (grade1 + grade2) / 2;

	cout << "Students grades in maths:" << endl
		<< name1 << " (with id " << id1 << " ) got grade: " << grade1 << endl
		<< name2 << " (with id " << id2 << " ) got grade: " << grade2 << endl
		<< "Average grade is: " << grade_avg;

	return 0;
}
