#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>
#include <vector>
using namespace std;


void summary12() {
	ifstream file("courses.csv");
	string crn[10];
	string course_title[10];
	string grade[10];
	string hrs[10];
	string num = "1";
	int total = 0;

	cout << "------------------------------------" << endl;
	cout << "ALL COURSES! \n" << endl;

	cout << setw(10) << "CRN" << setw(50) << "COURSES" << setw(20) << "GRADE" << setw(20) << "CREDITS" << endl;

	for (int i = 0; i < 10; i++) {


		string record;
		getline(file, record);

		stringstream sin(record);
		getline(sin, crn[i], ',');
		getline(sin, course_title[i], ',');
		getline(sin, grade[i], ',');
		getline(sin, hrs[i], ',');

		total = total + stoi(hrs[i]);
		cout << setw(10) << crn[i];
		cout << setw(50) << course_title[i];
		cout << setw(20) << grade[i];
		cout << setw(20) << hrs[i] << endl;

	}
	cout << total << endl;
}

void list_courses12() {
	ifstream file("courses.csv");
	string crn[10];
	string course_title[10];
	string grade[10];
	string hrs[10];
	int total  = 0;

	cout << "------------------------------------" << endl;
	cout << "ALL COURSES! \n" << endl;

	cout << setw(10) << "CRN" << setw(50) << "COURSES" << setw(20) << "GRADE" << setw(20) << "CREDITS" << endl;

	for (int i = 0; i < 10; i++) {
		

		string record;
		getline(file, record);

		stringstream sin(record);
		getline(sin, crn[i], ',');
		getline(sin, course_title[i], ',');
		getline(sin, grade[i], ',');
		getline(sin, hrs[i], ',');

		cout << setw(10) << crn[i];
		cout << setw(50) << course_title[i];
		cout << setw(20) << grade[i];
		cout << setw(20) << hrs[i] << endl;
		total = stoi(grade[i]);

	}
	cout << total << endl;
}

void new_courses12() {
	cout << "New Course!" << endl;
	ofstream file;
	file.open("courses.csv", ios::app);

	string crn;
	string course_title;
	char grade;
	int num_credit_hr;
	cout << "CRN:" << endl;
	cin >> crn;
	cout << "Course_Title:" << endl;
	cin >> course_title;
	cout << "Grade: " << endl;
	cin >> grade;
	cout << "Number of Credits: " << endl;
	cin >> num_credit_hr;

	file << crn << "," << course_title << "," << num_credit_hr << "," << grade << "," << endl;
	file.close();

}

int main12() {
	cout << "NEXT" << endl;
	char user;
	cin >> user;
	

	while (user != 'q') {
		switch (user)
		{
		case '1':
			list_courses12();
			break;
		case '2':
			new_courses12();
			break;

		default:
			break;
		}
	}

		
	
	return 0;

	
}
