// #pragma once
#ifndef _PERSON_H
#define _PERSON_H
#include <iostream>

// лебъл спецификатор за достъп
// метод в првейт няма да можем да правим обекти
// като няма спецификатор за достъп public то той автоматичко отива в private
// книга за disign patterns


class Person{

public:
    Person() = default;
    Person(const char*, int, int, int , double);
    Person(const Person*) {};


    ~ Person();
    char* Person
private:
    char * name;
    int n;
    int age;
    int height;
    double weight;

};


#endif
