#ifndef H_STUDENT_HPP
#define H_STUDENT_HPP

#include <iostream>
#include <iomanip>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::setw;


class Student{
    public:
        Student();

        Student(string firstName, string middleName, string lastName, string course, string specialty, int facultyNum, int grades[5]);

        ~Student();

        string getFName() const;
        string getMName() const;
        string getLName() const;
        string getCourse() const;
        string getSpecialty() const;
        int getFacultyNum() const;
        double getGrades(int subject) const;

        void setFName(string firstName);
        void setMName(string middleName);
        void setLName(string lastName);
        void setCourse(string course);
        void setSpecialty(string specialty);
        void setFacultyNum(int facultyNum);
        void setGrades(int grades[]);
        

        
        void input();

        void printTable() const;

        void sortDiscend();

        void printSorted();

    private:
        string firstName;
        string middleName;
        string lastName;
        string course;
        string specialty;
        int facultyNum;
        int grades[5];
};

#endif