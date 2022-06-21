#include <iostream>
#include "student.cpp"
#include "student.h"

using namespace std;

void Roster::parse()
{
    for (int i = 0; i < 5; i++)
    {
        string delimiter = ",";
        string token = studentData[i];
        for (int j = 0; j < 9; j++)
        {
            string value = token.substr(0, token.find(delimiter));
            switch (j)
            {
            case 0:
                value1 = value;
                break;
            case 1:
                value2 = value;
                break;
            case 2:
                value3 = value;
                break;
            case 3:
                value4 = value;
                break;
            case 4:
                value5 = stoi(value);
                break;
            case 5:
                value6 = stoi(value);
                break;
            case 6:
                value7 = stoi(value);
                break;
            case 7:
                value8 = stoi(value);
                break;
            case 8:
                if (value == "SECURITY")
                {
                    value9 = SECURITY;
                }
                else if (value == "NETWORK")
                {
                    value9 = NETWORK;
                }
                else
                {
                    value9 = SOFTWARE;
                }
                break;
            default:
                break;
            }
            token.erase(0, token.find(delimiter) + delimiter.length());
        }

        if (i == 0)
        {
            Student student1(value1, value2, value3, value4, value5, value6, value7, value8, value9);
            classRosterArray[0] = student1;
        }
        else if (i == 1)
        {
            Student student2(value1, value2, value3, value4, value5, value6, value7, value8, value9);
            classRosterArray[1] = student2;
        }
        else if (i == 2)
        {
            Student student3(value1, value2, value3, value4, value5, value6, value7, value8, value9);
            classRosterArray[2] = student3;
        }
        else if (i == 3)
        {
            Student student4(value1, value2, value3, value4, value5, value6, value7, value8, value9);
            classRosterArray[3] = student4;
        }
        else if (i == 4)
        {
            Student student5(value1, value2, value3, value4, value5, value6, value7, value8, value9);
            classRosterArray[4] = student5;
        }
        else
        {
            continue;
        }
    }
}
void Roster::add(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)
{
    Student newStudent(studentId, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
    classRosterArray[sizeof(classRosterArray) / sizeof(classRosterArray[0]) - 95] = newStudent;
}
string Roster::printAll()
{
    return classRosterArray[0].print() + "\n" + classRosterArray[1].print() + "\n" + classRosterArray[2].print() + "\n" + classRosterArray[3].print() + "\n" + classRosterArray[4].print() + "\n\n";
}

void Roster::remove(string studentId)
{
    bool success = false;
    for (int i = 0; i <= 100; i++)
    {
        if (classRosterArray[i].getStudentId() == studentId)
        {
            success = true;
        }
        if (success)
        {
            cout << studentId << " removed from roster." << endl;
            for (int j = i; j <= 100; j++)
            {
                classRosterArray[j] = classRosterArray[j + 1];
            }
            i = 100;
        }
    }
    if (success == false)
    {
        cout << "A student with this Id was not found." << endl;
    }
}

void Roster::printAverageDaysInCourse(string studentId)
{
    bool success = false;
    double avg;
    for (int i = 0; i <= 100; i++)
    {
        if (classRosterArray[i].getStudentId() == studentId)
        {
            success = true;
        }
        if (success)
        {
            avg = (classRosterArray[i].getDays1() + classRosterArray[i].getDays2() + classRosterArray[i].getDays3()) / 3;
            cout << avg << endl;
            i = 100;
        }
    }
}

void Roster::printInvalidEmails()
{
    for (int i = 0; i <= 100; i++)
    {
        if (classRosterArray[i].getEmail().find("@") != std::string::npos && classRosterArray[i].getEmail().find(".") != std::string::npos)
        {
            if (classRosterArray[i].getEmail().find(" ") != std::string::npos)
            {
                cout << "Invalid Email: " << classRosterArray[i].getEmail() << endl;
            }
            else
            {
                continue;
            }
        }
        else if (classRosterArray[i].getEmail() != "N/A")
        {
            cout << "Invalid Email: " << classRosterArray[i].getEmail() << endl;
        }
    }
    cout << endl;
}
void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
    for (int i = 0; i <= 100; i++)
    {
        if (classRosterArray[i].getProgram() == degreeProgram)
        {
            cout << classRosterArray[i].print() << endl;
        }
    }
}

Roster::~Roster()
{
    cout << "DESTRUCTOR CALLED!" << endl
         << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << "Destroying book #" << i + 1 << endl;
        delete &classRosterArray[i];
    }
}
;
