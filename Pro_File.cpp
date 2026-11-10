using namespace std;
#include <iostream>
#include<string>
#include<fstream>

struct Student
{
	char name[20];
	int id;
	float grade;
};

int main()
{
	char name[20];
	int id;
	float grade;
	char x = ' ';

	ofstream obj("students.txt", ios:: app);

	cout << "enter data of student" << endl;
	while (x != 'n')
	{
		cout << "name : ";
		cin.getline(name, 20);

		cout << "id : ";
		cin >> id;

		cout << "grade : ";
		cin >> grade;

		cout << "=================" << endl;

		cout << "if you wanna continue enter y else enter n" << endl;
		cin >> x;
		cout << "=================" << endl;

		cin.ignore();

		obj << name << ", ";
		obj << id << ", ";
		obj << grade << " ";
		obj << '$' << endl;
	}

	obj.close();
}