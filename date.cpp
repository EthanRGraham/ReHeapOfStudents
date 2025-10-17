#include <string>
#include <iostream>
#include <sstream>
#include "date.h"

Date::Date() {
    dateString = "";
    month = "";
    day = "";
    year = "";
}

void Date::init(std::string dateString) {
    this->dateString = dateString;
    std::stringstream ss(dateString);
    getline(ss, month, '/');
    getline(ss, day, '/');
    getline(ss, year);
}

void Date::printDate() {
    std::string monthName;

    if (month == "01") monthName = "January";
    else if (month == "02") monthName = "February";
    else if (month == "03") monthName = "March";
    else if (month == "04") monthName = "April";
    else if (month == "05") monthName = "May";
    else if (month == "06") monthName = "June";
    else if (month == "07") monthName = "July";
    else if (month == "08") monthName = "August";
    else if (month == "09") monthName = "September";
    else if (month == "10") monthName = "October";
    else if (month == "11") monthName = "November";
    else if (month == "12") monthName = "December";
    else monthName = "Invalid Month";

    std::cout << monthName << " " << day << ", " << year << std::endl;
}
