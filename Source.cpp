#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>
#include <vector>

using namespace std;
/*
void new_course() {

	ofstream file;
	file.open("courses.csv", ios::app);

	string crn;
	string course_title;
	char grade;
	int num_credit_hr;
	cin >> crn;
	cin >> course_title;
	cin >> grade;
	cin >> num_credit_hr;

	file << crn << "," << course_title << "," << num_credit_hr << "," << grade << "," << endl;
}

void view_course() {
	string total;
	ifstream file;
	file.open("courses.csv");

	cout << setw(10) << "CRN" << setw(50) << "Course Title" << setw(20) << "Grade" << setw(20) << "Credits" << endl;
	string line;
	string tmp;
	vector <string> words;
	string crn;
	string course_title;
	string grade;
	string hr;

	// read file 
	while (file.good()) {
		getline(file, line);

		stringstream s(line);
		// add elements till the comma to the vector
		while (getline(s, tmp, ',')) {
			words.push_back(tmp);
		}

	}

	// display file
	// add one to move to the next element in the vector 
	int i = 0;
	while (i < words.size()) {

		crn = words[i];
		i = i + 1;

		course_title = words[i];
		i = i + 1;

		grade = words[i];
		i = i + 1;

		hr = words[i];
		i = i + 1;


		cout << setw(10) << crn;
		cout << setw(50) << course_title;
		cout << setw(20) << grade;
		cout << setw(20) << hr << endl;

		i++;
	
	}

}

int choice() {

	char user;
	cin >> user;
		return user; 
}

void total_hours(){
	ifstream file;
	file.open("courses.csv");
	cout << setw(10) << "CRN" << setw(50) << "Course Title" << setw(20) << "Grade" << setw(20) << "Credits" << endl;
	string line;
	string tmp;
	vector <string> words;
	string hr;
	int total = 0;
	int new_num = 0;

	// read file 
	while (file.good()) {
		getline(file, line);

		stringstream s(line);
		// add elements till the comma to the vector
		while (getline(s, tmp, ',')) {
			words.push_back(tmp);
		}
	}
	// display file
	// add one to move to the next element in the vector 
		for (int i = 3; i < words.size(); i++)
		{
			new_num = stoi(words[i]);
			i = i + 4;

		}
	

	cout << setw(20) << new_num ;


}


int main1() {
	do {
		cout << "NEXT" << endl;
			switch (choice()) {
			case '1':
				new_course();
				break;

			case '2':
				view_course();
				break;

			case '3':
				total_hours();
				break;
			}

		

	} while (choice() != 'q');


	
	system("pause");
	return 0;
}*/