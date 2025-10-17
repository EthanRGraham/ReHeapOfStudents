#include <string>
#include <iostream>
#include <sstream>
#include "student.h"
#include "date.h"
#include "address.h"


Student::Student(){
	studentString = " ";
	firstName = " ";
	lastName = " ";
	birthDate = new Date();
	gradDate = new Date();
	address = new Address();
	creditHours = 0;
} //end constructor

Student::Student(std::string studentString){
	Student::init(studentString);
}

Student::~Student(){
	delete birthDate;
	delete gradDate;
	delete address;
}//end destructor

void Student::init(std::string studentString){
	Student::studentString = studentString;
	std::stringstream ss;
	ss.clear();
	ss.str(studentString);

	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string sBirthDate;
	std::string sGradDate;
	std::string sCredHour;

	getline(ss, firstName, ',');
	getline(ss, lastName, ',');
	getline(ss, street, ',');
	getline(ss, city, ',');
	getline(ss, state, ',');
	getline(ss, zip, ',');
	getline(ss, sBirthDate, ',');
	getline(ss, sGradDate, ',');
	getline(ss, sCredHour, ',');

	address->init(street, city, state, zip);
	birthDate->init(sBirthDate);
	gradDate->init(sGradDate);

	ss.clear();
	ss.str(sCredHour);
	ss >> sCredHour;

}//end init
void Student::printStudent(){
	std::cout << firstName << " " << lastName << std::endl;
	address->printAddress();
	std::cout << "DOB: ";
	birthDate->printDate();
	std::cout << "Grad: ";
	gradDate->printDate();
	std::cout << "Credits: " << creditHours << std::endl;
	std::cout << "__________________________________________";
	std::cout << std::endl;
}//end printStudent


std::string Student::getLastFirst(){
	std::stringstream ss;
	ss.clear();
	ss << lastName << ", " << firstName << std::endl;
	return ss.str();
}//end getLastName

std::string Student::getLastName(){
	return lastName;
}// end getLastName
 
std::string Student::getFirstName(){
	return firstName;
}// getFirstName
 //

int Student::getCredHours(){
	return creditHours;
}// end getCredHours



