#include <iostream>
#include <string>

using namespace std;

class Course {
public:
    string courseName;
    string courseCode;
    int duration;
};

class ICTCourse : public Course {
public:
    string specialisation;
};

class LawCourse : public Course {
public:
    string areaOfLaw;
};

class BusinessCourse : public Course {
public:
    string areaOfBusiness;
};

class DegreeCourse {
public:
    string degreeName;
    string degreeLevel;
};

class BscITCourse : public DegreeCourse {
public:
    ICTCourse stage1;
    ICTCourse stage2;
    ICTCourse stage3;
};

class Person {
public:
    int age;
    string firstName;
    string lastName;
    void getValues() {
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter age: ";
        cin >> age;
    }
    void setValues() {
        cout << "First name: " << firstName << endl;
        cout << "Last name: " << lastName << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    string institution;
    int year;
    string registrationNumber;
};

int main() {
    // Example usage:
    BscITCourse bscit;
    bscit.degreeName = "Bachelor of Science in Information Technology";
    bscit.degreeLevel = "Undergraduate";

    bscit.stage1.courseName = "Introduction to Computer Science";
    bscit.stage1.courseCode = "CSC101";
    bscit.stage1.duration = 1;
    bscit.stage1.specialisation = "Programming";

    bscit.stage2.courseName = "Data Structures and Algorithms";
    bscit.stage2.courseCode = "CSC201";
    bscit.stage2.duration = 1;
    bscit.stage2.specialisation = "Programming";

    bscit.stage3.courseName = "Software Engineering";
    bscit.stage3.courseCode = "CSC301";
    bscit.stage3.duration = 1;
    bscit.stage3.specialisation = "Project Management";

    Student student;
    student.getValues();
    student.institution = "Example University";
    student.year = 2;
    student.registrationNumber = "123456";

    cout << endl;
    student.setValues();

    return 0;
}
