#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "student.h"
#include "date.h"
#include "address.h"

int menu(){
	std::string input;

	std::cout << "\n===========================" << std::endl;
	std::cout << "0. Quit" << std::endl;
	std::cout << "1. Print all student names" << std::endl;
	std::cout << "2. Print all student data" << std::endl;
	std::cout << "3. Find a student" << std::endl;
	std:: << "===========================" << std::endl;
	std:: << " Enter choice: ";
	std::getline(std::cin, input);
	return input;
}//end menu



void loadStudents(std::vector<Student*>& students){
	std::ifstream inFile;
	std::string currentLine;

	inFile.open("students.csv");
	while(getline(inFile, currentline)){
		Student* s = new Student;
		student.push_back(s);
	}//end while
	inFile.close();
}// end loadStudents

void ShowStudentNames(std::vector<Student*>& students){
	for (Student* student: students){
		std::cout << student->getLastFirst();
		std::cout << ", " << student->getCreditHours() << std::endl;
	}//end for
}//end showStudentNames

int main() {
	std::vector<Student*> students;
	std::string choice = "";
	std::cout << "Student Database" << std::endl;

	while (choice != "0") {
		choice = menu();

		if (choice == "1") {
			ShowStudentNames(students);
		} else if (choice == "2") {
			printStudents(students);
		} else if (choice == "3") {
			findStudent(students);
		} else if (choice == "0") {
			students.clear();
			std::cout << "Goodbye!" << std::endl;
		} else {
			std::cout << "Invalid option." << std::endl;
		}
	} //end while
	delStudents(students);
	return 0;


} //end main


/*
void testAddress();
void testDate();
void testStudent();


int main(){
  std::cout << "Hello!" << std::endl;
  testAddress();
  testDate();
  testStudent();
  return 0;
} // end main

void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate

void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end testStudent
  //
 */

