#include <iostream>
#include <string>
#include <fstream>


/*
Your instructor wants to create a struct to keep track of student grades. The information
the instructor needs includes the student’s 
string first name, 
string last name, a 
int six-digit ID number, 
int array ten programming assignment grades, 
int array three exam grades, and 
int a final exam grade. 
Define a
struct named grades that will contain all of these members.


Design a program that prepares a grade book for an instructor. Use struct grades and
the variable students of data type grades declared in Exercise 3. Input the student
information (first name, last name, six-digit ID number, ten programs, three exam grades,
and final exam grade) from the file gradeBook.txt, which is saved in the Chap09 folder of
your Student Data Files. Calculate the grade as follows: programs 30% total, exams 15%
each, and final exam 25%. Students with 90 and above averages earn an A, 80 to 89 earn a
B, 70 to 79 earn a C, 60 to 69 earn a D, and all grades below 60 earn an F. Display each
student’s name and final grade.
*/

const string DATA_FILE="gradeBook.txt";
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


/*
Calculate the grade as follows: 
10 programs 3% each,   30
(p1 + p2 + p3 ... + p10 ) * .03
 
3 exams 15% each, and  45
(e1 + e2 + e3) * .15

final exam 25%.        25
100
*/
float calculate_grade(){
	
}


/*
Students with 90 and above averages earn an A, 80 to 89 earn a
B, 70 to 79 earn a C, 60 to 69 earn a D, and all grades below 60 earn an F.
*/
char get_letter_grade(float grade){
	if(90 <= grade){
		return 'A';
	}else if()
	.
	.
	.
	}else{
		return 'F';
	}
}


int main(){
	fin.open(DATA_FILE);
	// Do stuff
	while(true){
		read_record();
		if(fin.eof()){
			break;
		}
		float grade = calculate_grade();
		char letter_grade = get_letter_grade(grade);
		cout << student.first_name << " " << student.last_name << '\t' << letter_grade << endl;
	}
	fin.close();
	return 0;
}





