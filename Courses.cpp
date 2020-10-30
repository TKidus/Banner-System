// 
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>
#include <vector>

using namespace std;


void new_course() {

	ofstream file;
	file.open("courses.csv", ios::app);
	cout << "\nADDING NEW COURSE: " << endl;
	cout << " ------------------------------------------------------------------------------------------" << endl;

	string crn;
	string course_title;
	string grade;
	string num_credit_hr;


	cout << "ENTER CRN: " << endl;
	cin >> crn;
	cout << "ENTER COURSE TITLE: " << endl;
	cin >> course_title;
	cout << "ENTER GRADE: " << endl;
	cin >> grade;
	cout << "ENTER HOURS: " << endl;
	cin >> num_credit_hr;



	file << crn << "," << course_title << "," << grade << "," << num_credit_hr << "," << endl;

	file.close();
	cout << "ADDED SUCCESSFULLY " << endl;
	cout << " ------------------------------------------------------------------------------------------\n" << endl;

}

void read_courses() {
	ifstream file;
	file.open("courses.csv");

	cout << " \n ALL COURSES \n------------------------------------------------------------------------------------------" << endl;

	cout << setw(10) << "CRN" << setw(50) << "Course Title" << setw(20) << "Grade" << setw(20) << "Credits" << endl;

	string crn[100];
	string course_title[100];
	string grade[100];
	string hr[100];

	// firsst index of the array
	int i = 0;
	// read file 
	while (file.good()) {
		string line;

		getline(file, line);

		stringstream s(line);
		getline(s, crn[i], ',');
		getline(s, course_title[i], ',');
		getline(s, grade[i], ',');
		getline(s, hr[i], ',');


		cout << setw(10) << crn[i];
		cout << setw(50) << course_title[i];
		cout << setw(20) << grade[i];
		cout << setw(20) << hr[i] << endl;

		++i;
	}
	file.close();

	cout << "\n ------------------------------------------------------------------------------------------\n" << endl;

}


void summary() {
	ifstream file;
	file.open("courses.csv");


	string crn[100];
	string course_title[100];
	string grade[100];
	string hr[100];
	int total = 0;
	double gpa = 0.0;
	double quality_value_points = 0.0;
	double cuurent_num = 0.0;
	string Classification;
	string standing;

	int i = 0;
	int covrt_num = 0;


	while (file.good()) {
		string line;


		getline(file, line);

		stringstream s(line);
		getline(s, crn[i], ',');
		getline(s, course_title[i], ',');
		getline(s, grade[i], ',');
		getline(s, hr[i], ',');

		cout << hr[i] << "------";

		if (!file.eof()) {
			stringstream hr(hr[i]);
			hr >> covrt_num;


			// Total Hours
			total = total + covrt_num;
			cout << total << "------------" << covrt_num << endl;

		}


		//gpa 
		if (grade[i] == "A") {
			cuurent_num = covrt_num  * 4;
			quality_value_points = quality_value_points + cuurent_num;


		}

		else if (grade[i] == "B") {
			cuurent_num = covrt_num * 3;
			quality_value_points = quality_value_points + cuurent_num;
		}

		else if (grade[i] == "C") {
			cuurent_num = covrt_num * 2;
			quality_value_points = quality_value_points + cuurent_num;
		}

		else if (grade[i] == "D") {
			cuurent_num = covrt_num * 1;
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

		else if (gpa >= 2.0 && gpa < 3.5) {
			standing = "Satisfactory";
		}

		else if (gpa > 3.5) {
			standing = "Honors";
		}
		
		



		i++;


	}

	file.close();

	cout << "\nCOURSES SUMMARY" << endl;
	cout << " ------------------------------------------------------------------------------------------" << endl;
	cout << setw(20) << "TOTAL HOURS" << setw(20) << "GPA"
		<< setw(20) << "CLASSIFICATION" << setw(20) << "STANDING" << endl;


	//   cout << setw(20) << "quality_value_points: " << quality_value_points << endl;
	cout << setw(20) << total
		<< setw(20) << setprecision(2) << gpa
		<< setw(20) << Classification
		<< setw(20) << standing << endl;
	cout << "\n ------------------------------------------------------------------------------------------\n" << endl;





}



void save_courses() {
	cout << " \n SAVE COURSES TO A FILE! \n------------------------------------------------------------------------------------------" << endl;

	ifstream file;

	file.open("courses.csv");


	 string filename;
	 string crn[100];
	 string course_title[100];
	 string grade[100];
	 string hrs[100];

	 // input new file file 
	 cout << "ENTER FILE NAME: ";
	 cin >> filename;

	 //merge filename with extention csv
	 filename += ".csv";

	 // create new file 
	 ofstream newfile;
	 newfile.open(filename.c_str());


	 // first index of the array 
	 int i = 0;
	// read file 
	while (file.good()) {
		string line;


		getline(file, line);

		stringstream s(line);
		getline(s, crn[i], ',');
		getline(s, course_title[i], ',');
		getline(s, grade[i], ',');
		getline(s, hrs[i], ',');

		// write array data to new file 
		newfile << crn[i] << "," << course_title[i] << "," << grade[i] << "," << hrs[i] << "," << endl;



		++i;
	}

	file.close();
	newfile.close();

	cout << "\n ------------------------------------------------------------------------------------------\n" << endl;

}


void menu() {
	cout << "WHAT YOU WNAT TO DO: " << endl;
	cout << "1. ADD NEW COURSE " << endl;
	cout << "2. LIST COURSES " << endl;
	cout << "3. SUMMARY " << endl;
	cout << "4. SAVE COURSES TO A FILE " << endl;
	cout << "5. QUIT " << endl;

	cout << "\nCHOICE OPTION: " ;


}

int main() {



	int user = 0;
	while (user != 5) {

		menu();
		cin >> user;

		switch (user)
		{
		case 1:
			new_course();
			break;

		case 2:
			read_courses();
			break;

		case 3:
			summary();
			break;

		case 4: 
			save_courses();
			break;

		default:
			cout << "PLEASE ENTER VALID CHOICE! " << endl;
			break;
		}
	}

	system("pause");
	return 0;
}



