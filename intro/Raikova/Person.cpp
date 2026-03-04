#include "Person.h"

Person::Person(){
    name = nullptr;
    n = 0;
    age = 0;
    height = 0;
    weight = 0;
}

Person::Person(const char* name, int n, int age, int height, double weight):
    name(new char[n + 1]), n(n), age(age), height(height), weight(weight){
    strcpy(this -> name, name);
}

Person::Person(const Person* rhs): name(new char[rhs.n + 1], n(rhs.n), age(rhs.age), height())


Person::~Person(){

}