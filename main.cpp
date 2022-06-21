#include <iostream>
#include "degree.h"
#include "roster.h"
#include "roster.cpp"

using namespace std;

int main ()
{   
    cout << "Programming Language: C++" << endl;
    cout << "Name: Nicholas Bryce Majors" << endl << endl;
    // 2.  Create an instance of the Roster class called classRoster.
    Roster classRoster;
    // 3.  Add each student to classRoster. Parse function will accomplish this.
    classRoster.parse();
    // 4. Convert the following pseudo code to complete the rest of the  main() function:
    cout << classRoster.printAll();
    classRoster.printInvalidEmails();
    for (int i = 0; i < 5; i++) {
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i].getStudentId());
    }
    cout << endl;
    classRoster.printByDegreeProgram(SOFTWARE);
    cout << endl;
    classRoster.remove("A3");
    cout << endl << classRoster.printAll();
    classRoster.remove("A3");

    // 5. Implement the destructor to release the memory that was allocated dynamically in Roster.
    classRoster.~Roster();
    return 0;
    
}