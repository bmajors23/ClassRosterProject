#pragma once
#include <iostream>
#include "student.h"

using namespace std;

class Roster {
    public:
        Student classRosterArray[100];
        string value1;
        string value2;
        string value3;
        string value4;
        int value5;
        int value6;
        int value7;
        int value8;
        DegreeProgram value9;

        void parse();

        void add(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
        string printAll();

        void remove(string studentId);

        void printAverageDaysInCourse(string studentId);

        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degreeProgram);

        ~Roster();
    };
