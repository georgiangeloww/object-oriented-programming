#include "Student.hpp"

    Student::Student() {
        firstName="Unknown";
        middleName="Unknown";
        lastName="Unknown"; 
        course="Unknown";
        specialty="Unknown";
        facultyNum=0;
        for (int i = 0; i < 5; i++) grades[i] = 2;
    }

    Student::Student(string firstName, string middleName, string lastName, string course, string specialty, int facultyNum, int grades[5]) 
        : firstName(firstName), middleName(middleName), lastName(lastName), course(course),
        specialty(specialty), facultyNum(facultyNum) {
        for (int i = 0; i < 5; i++) this->grades[i] = grades[i]; 
    }

    Student::~Student() {}

    string Student::getFName() const {
        return firstName;
    }
    string Student::getMName() const {
        return middleName;
    }
    string Student::getLName() const {
        return lastName;
    }
    string Student::getCourse() const {
        return course;
    }
    string Student::getSpecialty() const {
        return specialty;
    }
    int Student::getFacultyNum() const {
        return facultyNum;
    }
    double Student::getGrades(int subject) const {
        return grades[subject];
    }

    void Student::setFName(string firstName) {
        if(firstName != ""){
            this->firstName = firstName;
        }
    }

    void Student::setMName(string middleName){
        this->middleName = middleName;
    }
    void Student::setLName(string lastName) {
        this->lastName = lastName;
    }
    void Student::setCourse(string course) {
        this->course = course;
    }
    void Student::setSpecialty(string specialty) {
        this->specialty = specialty;
    }
    void Student::setFacultyNum(int facultyNum) {
        this-> facultyNum = facultyNum;
    }
    void Student::setGrades(int grades[]) {
        for (int i = 0; i < 5; i++) {
            this -> grades[i] = grades[i];
        }
    }

    void Student::input() {
        cin >> firstName >> middleName >> lastName >> course >> specialty >> facultyNum;
        for (int i = 0; i < 5; i++) cin >> grades[i];
    }

    void Student::printTable() const {
        cout << "| " << std::left << setw(24)
            << (firstName + " " + middleName + " " + lastName)
            << "| " << setw(7)  << course
            << "| " << setw(14) << specialty
            << "| " << setw(11) << facultyNum
            << "|\n";

        for (int i = 0; i < 5; i++) {
            cout << grades[i];
            if (i < 4) cout << ", ";
        }
        cout << "\n";
    }