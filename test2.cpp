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
void summary() {
	ifstream file;
	file.open("courses.csv");


	string crn[100];
	string course_title[100];
	string grade[100];
	string hr[100];
	double total = 0.0;
	double gpa = 0.0;
	double quality_value_points = 0.0;
	double cuurent_num = 0.0;
	string Classification;
	string standing;

	cout << setw(10) << "CRN" << setw(50) << "Course Title" << setw(20) << "Grade" << setw(20) << "Credits" << endl;
	string line;

	while (file >> line) {
		
		int i = 0;

		getline(file, line);

		stringstream s(line);
		getline(s, crn[i], ',');
		getline(s, course_title[i], ',');
		getline(s, grade[i], ',');
		getline(s, hr[i], ',');
		
		// Total Hours
		total = total + stoi(hr[i]);
		
		// gpa
		if (grade[i] == "A") {
			cuurent_num = stoi(hr[i]) * 4;
			quality_value_points = quality_value_points + cuurent_num ;


		}

		else if (grade[i] == "B") {
			cuurent_num = stoi(hr[i]) * 3;
			quality_value_points = quality_value_points + cuurent_num;
		}

		else if (grade[i] == "C") {
			cuurent_num = stoi(hr[i]) * 2;
			quality_value_points = quality_value_points + cuurent_num;
		}

		else if (grade[i] == "D") {
			cuurent_num = stoi(hr[i]) * 1;
			quality_value_points = quality_value_points + cuurent_num;
		}

		gpa = quality_value_points / total;


		// CLASSIFICATION 
		if (total <= 30) {
			Classification = "FRESHMENT";
		}

		else if (total >= 30 && total <= 60) {
			Classification = "SOPHOMORE";
		}

		else if (total >= 60 && total <= 90) {
			Classification = "JUNIOR";
		}

		else if (total >= total) {
			Classification = "SENIOR";

		}

		// STANDING 
		if (gpa < 2.0) {
			standing = "Probation";
		}

		else if (gpa >= 2.0 && gpa < 3.5 ) {
			standing = "Satisfactory";
			cout << gpa << endl;
		}

		else if (gpa > 3.5 ) {
			standing = "Honors";
		}

		

	
		i++;

	}

		cout << setw(20) << "total: " << total << endl;

	   cout << setw(20) << "quality_value_points: " << quality_value_points << endl;

		cout << setw(20) << "gpa: "<< gpa << endl; 
		cout << setw(20) << "Classification: " << Classification << endl;
		cout << setw(20) << "STANDING: " << standing  << endl;





}






int main() {
	cout << "NEXT" << endl;
	char user;
	cin >> user;


		switch (user)
		{
		case '2': 
			read_courses();
			break;
	

		default:
			break;
		}


		system("pause");

	return 0;


}
*/