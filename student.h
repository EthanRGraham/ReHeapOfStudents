#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "date.h"
#include "address.h"

class Student {
	protected:
		std::string studentString;
		std::string firstName;
		std::string lastName;
		Date* birthDate;
		Date* gradDate;
		Address* address;
		int creditHours;
	public:
		Student();
		Student(std::string studentString);
		~Student();
		void init(std::string studentString);
		void printStudent();
		std::string getLastFirst();
		std::string getFirstName();
		std::string getLastName();
		int getCredHours();
};//end class def
#endif
