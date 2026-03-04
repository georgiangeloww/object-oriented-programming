#include <iostream>
#include "Person.h"


int main(){
    Person p1;//един неявен параметър чрез които извикваме метода
    Person p2("Ivan", 4, 34, 187, 78);
    {
        Person p3 = p2;
    }
    cout << p2.getName() << endl;
    return 0;
}