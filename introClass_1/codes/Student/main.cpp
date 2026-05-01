#include "Student.hpp"

int main(){
    int n;
    cin >> n;
    
    Student* student = new Student[n];

    for (int i = 0; i < n; i++){
        student[i].input();
    }

    // for (int i = 0; i < n; i++) {
    //     student[i].printTable();
    // }

    sortDescend(student, n);
    printSorted(student, n);




    if(student != nullptr){
        delete[] student;
    }

    return 0;
}