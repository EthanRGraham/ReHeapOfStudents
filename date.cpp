#include <string>
#include <iostream>
#include <sstream>
#include "date.h"


Date::Date(){
	dateString = " ";
	month = " ";
	day = " ";
	years = " ";

}

void Date::init(std::string dateString){
	Date::dateString = dateString;
	std::stringstream ss;
	std::string sMonth;
	std::string sDay;
	std::string sYear;
	
	ss.clear();
	ss.str(dateString);

	getline(ss, sMonth, '/'); //delimiter '/'//
	getline(ss, sDay, '/');
	getline(ss, sYear);

	ss.clear();
	ss.str("");

	ss << sDay << "  " << sMonth << " " << ssYear;
	ss >> day >> month >> year;
} //end init


void Date::printDate(){
	if (month == "01"){
		month = "January";
	} else if (month == "02"){
		month = "February";
	} else if (month == "03"){
       		month = "March";
    	} else if (month == "04"){
        	month = "April";
    	} else if (month == "05"){
        	month = "May";
    	} else if (month == "06"){
        	month = "June";
    	} else if (month == "07"){
        	month = "July";
    	} else if (month == "08"){
        	month = "August";
    	} else if (month == "09"){
        	month = "September";
    	} else if (month == "10"){
        	month = "October";
    	} else if (month == "11"){
        	month = "November";
    	} else if (month == "12"){
        	month = "December";
    	} else {
        	month = "Invalid Month";
	} //end if
	  std::cout << month << " " << day << ", " << year <<std::endl;
} //end printDate	

