#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

const string DATA_FILE = "gradeBook.txt";
const int NUMBER_OF_ASSIGNMENTS = 10;
const int NUMBER_OF_EXAMS = 3;
ifstream fin;

class grades{
public:
	string first_name;
	string last_name;
	int id;
	int assignment_grades[NUMBER_OF_ASSIGNMENTS];
	int exam_grades[NUMBER_OF_EXAMS];
	int final_exam_grade;
};

grades student;

void read_record(){
	fin >> student.first_name;
	fin >> student.last_name;
	fin >> student.id;
	for(int i = 0 ; i < NUMBER_OF_ASSIGNMENTS; i++){
		student.assignment_grades[i];
	}
	for(int i = 0 ; i < NUMBER_OF_EXAMS; i++){
		student.exam_grades[i];
	}	
	fin >> student.final_exam_grade;	
}



//Calculate the grade as follows: 
//10 programs 3% each,   30
//(p1 + p2 + p3 ... + p10 ) * .03
 
//3 exams 15% each, and  45
//(e1 + e2 + e3) * .15

//final exam 25%.        25

float calculate_grade(){
	
}



//Students with 90 and above averages earn an A, 80 to 89 earn a
//B, 70 to 79 earn a C, 60 to 69 earn a D, and all grades below 60 earn an F.

char get_letter_grade(float grade){
	if(90 <= grade){
		return 'A';
	}else if(80 <= grade){
		return 'B';
	}else if(70 <= grade){
		return 'C';
	}else if(60 <= grade){
		return 'D';
	}else{
		return 'F';
	}
}


int main(){
		int count = 0;
		ifstream countStudents("gradeBook.txt");
		while(!countStudents.eof()){
			string line;
			getline(countStudents, line, '\n');
			count++;
		}
		cout << count << endl;
	countStudents.close();
/*	fin.open(DATA_FILE);
	for (int i = 1; i < count; i++){
		read_record();
		if(fin.eof()){
			break;
		}
		float grade = calculate_grade();
		char letter_grade = get_letter_grade(grade);
		cout << student.first_name << " " <<gps student.last_name << '\t' << letter_grade << endl;
	} 
	fin.close();*/
	return 0;
}





