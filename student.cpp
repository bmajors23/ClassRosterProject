#include <iostream>
#include "degree.h"
#include "student.h"

using namespace std;


Student::Student()
{
    studentId = "N/A";
    firstName = "N/A";
    lastName = "N/A";
    email = "N/A";
    age = 0;
    days[0] = 0;
    days[1] = 0;
    days[2] = 0;
    program = SECURITY;
}
Student::Student(string aStudentId, string aFirstName, string aLastName, string aEmail, int aAge, int aDays0, int aDays1, int aDays2, DegreeProgram aProgram)
{
    studentId = aStudentId;
    firstName = aFirstName;
    lastName = aLastName;
    email = aEmail;
    age = aAge;
    days[0] = aDays0;
    days[1] = aDays1;
    days[2] = aDays2;
    program = aProgram;
}

void Student::setStudentId(string aStudentId)
{
    if (aStudentId[0] == 'A')
    {
        studentId = aStudentId;
    }
    else
    {
        studentId = "N/A";
    }
}

string Student::getStudentId()
{
    return studentId;
}

void Student::setFirstName(string aFirstName)
{
    firstName = aFirstName;
}

string Student::getFirstName()
{
    return firstName;
}

void Student::setLastName(string aLastName)
{
    lastName = aLastName;
}

string Student::getLastName()
{
    return lastName;
}

void Student::setEmail(string aEmail)
{
    email = aEmail;
}

string Student::getEmail()
{
    return email;
}

void Student::setAge(int aAge)
{
    age = aAge;
}

int Student::getAge()
{
    return age;
}

void Student::setDays(int aDays0, int aDays1, int aDays2)
{
    days[0] = aDays0;
    days[1] = aDays1;
    days[2] = aDays2;
}

int Student::getDays1()
{
    return days[0];
}

int Student::getDays2()
{
    return days[1];
}

int Student::getDays3()
{
    return days[2];
}

void Student::setProgram(DegreeProgram aProgram)
{
    program = aProgram;
}

DegreeProgram Student::getProgram()
{
    return program;
}

string Student::print()
{
    return this->studentId + "   " + this->firstName + "   " + this->lastName + "   " + this->email + "   " + to_string(this->age) + "   [" + to_string(this->days[0]) + ", " + to_string(this->days[1]) + ", " + to_string(this->days[2]) + "] " + to_string(this->program);
}
;
