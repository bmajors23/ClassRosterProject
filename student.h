#pragma once
#include <iostream>

using namespace std;

    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
        "A5,Bryce,Majors,bmajors23@gmail.com,26,14,20,25,SOFTWARE"
    };

    class Student {
        private:
            string studentId;
            string firstName;
            string lastName;
            string email;
            int age;
            int days[3];
            DegreeProgram program;
        public:   

            Student();
            Student(string aStudentId, string aFirstName, string aLastName, string aEmail, int aAge, int aDays0, int aDays1, int aDays2, DegreeProgram aProgram);

            void setStudentId(string aStudentId);

            string getStudentId();

            void setFirstName(string aFirstName);

            string getFirstName();

            void setLastName(string aLastName);

            string getLastName();

            void setEmail(string aEmail);

            string getEmail();

            void setAge(int aAge);

            int getAge();

            void setDays(int aDays0, int aDays1, int aDays2);

            int getDays1();

            int getDays2();

            int getDays3();

            void setProgram(DegreeProgram aProgram);

            DegreeProgram getProgram();

            string print();
    };
