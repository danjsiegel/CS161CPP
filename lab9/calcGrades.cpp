#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <sstream>

using namespace std;

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

void read_record(string line){
	istringstream iss(line);
	iss >> student.first_name;
	iss >> student.last_name;
	iss >> student.id;
	for(int i = 0 ; i < NUMBER_OF_ASSIGNMENTS; i++){
		iss >> student.assignment_grades[i];
	}
	for(int i = 0 ; i < NUMBER_OF_EXAMS; i++){
		iss >> student.exam_grades[i];
	}	
	iss >> student.final_exam_grade;
}


float calculate_grade(){	
	float grade = 0;	
	float programsTotal = 0;
	float examsTotal = 0;
	float final = student.final_exam_grade;
	for (int i = 0; i < 10; i++){
	programsTotal = programsTotal + student.assignment_grades[i];
		}
	for (int i = 0; i < 3; i++){
	examsTotal = examsTotal + student.exam_grades[i];
		}
	programsTotal = programsTotal * .03;
	examsTotal = examsTotal * .15;
	final = final * .25;
	grade = programsTotal + examsTotal + final;	
	return grade; 
}


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
		cout << "\tFinal Grades" << endl;
		ifstream studentCounter("gradeBook.txt");
		string line;
		while(getline(studentCounter, line)){
			read_record(line);	
			float grade = calculate_grade();
			char letter_grade = get_letter_grade(grade);
			cout << student.first_name << " " << student.last_name << '\t' << letter_grade << endl;
		
		}
		studentCounter.close();

	return 0;
}





