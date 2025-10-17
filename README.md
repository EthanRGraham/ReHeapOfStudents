# ReHeapOfStudents
#date.cpp
make the constuctor with default values
initiate new values
load input into a new stringstring 'dateString'

#address.cpp

include address.h

createa constructor which has empty place holders for street, city, state, and zip.
    street = " ";

Then, assign what each local variable for this instance is to the variable in the Address class. 

Address::street = street;

void Address::printAddress{
print street, city, state, and zip
}

#Student Class
Student class will pull from Date class and Address classes to creaeach student's address, dob, and expected graduation. 

#Uml
```mermaid 
classDiagram
    Student o-- Address
    Student o-- Date
    class Student{
        - string studentString
        - string firstName
        - string lastName
        - # Date^ DOB
        - # Date^ expectedGrad [^heap^]
        - # Address^ Address
        - # int creditHour

        - Student()
        - ~Student()
        + void init(studentString)
        + void printStudent()
        + string getFirstName()
        + string getLastName()
        + int getCreditHours()
           }
    class Address {
        -# string street
        -# string city
        -# string state
        -# string zip
        # means protected (private but 'children'
         can have it]
         - Address()
         - void init (street, city, state, zip)
         - void printAdress()

    }
    class Date{
        - # string dateString
        - # int month
        - # int day
        - #int year

        - + Date()
        - +void init(dateString)
        - + void printDate()
    }
```
