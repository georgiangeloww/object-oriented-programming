#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;


class Person{

    public:
    
    Person(){
        name = "nqma";
        height = 0; 
        weight = 0;
    }

    Person(string name, float h, float w){
        cout << "Конструктор с параметри!\n";
        this->name = name;
        this->height = h;
        this->weight = w;
        cout << "[Constuctor]Човек на име: " << name << " бе вписан!\n";
    }

    ~Person() {}

    Person(const Person& rhs){
        name = rhs.name;
        height = rhs.height;
        weight = rhs.weight;
    }

    Person& operator=(const Person& rhs){
        if(this == &rhs){
            return *this;
        }
        name = rhs.name;
        height = rhs.height;
        weight = rhs.weight;
        return *this;
    }


    void setName(const string name){
        this -> name = name;   
    }

    void setHeight(float h){
        if(h < 0.30){
            this -> height = h;
        }
    }

    void setWeight(float w){
        if(w < 20){
            this -> weight = w;
        }
    }

    string getName() const{
        return name;
    }

    float getHeight() const{
        return height;
    }

    float getWeight() const{
        return weight;
    }


    void read(){
        cin >> name;
        cin >> height;
        cin >> weight;
    }

    void print() const{
        cout << name << std::endl;
        cout << height << std::endl;
        cout << weight << std::endl;
    }

    float bmi() const{
        return weight / (height * height); 
    }

    void state() const{
        float tmp = bmi();
        if(tmp < 16.0){
            cout << "Тежко недохранване";
            return;
        }
        else if(tmp >= 16.0 && tmp <= 18.49){
            cout << "недохранване";
            return;
        }
        else if(tmp >= 18.5 && tmp <= 24.99){
            cout << "нормално тегло";
            return;
        }
        else if(tmp >= 25.0 && tmp <= 29.99){
            cout << "предзатлъстяване";
            return;
        }
        else if(tmp >= 30.0 && tmp <= 34.99){
            cout << "затлъстяване първа степен";
            return;
        }
        else if(tmp >= 35.0 && tmp <= 39.99){
            cout << "затлъстяване втора степен";
            return;
        }
        else if(tmp >= 40.0){
            cout << "затлъстяване трета степен";
            return;
        }
    }

private:
    string name;
    float height;
    float weight;
};

double diff(const Person& p1, const Person& p2){
        return (p1.getHeight() - p2.getHeight()) * (p1.getHeight() - p2.getHeight()) + (p1.bmi() - p2.bmi()) * (p1.bmi() - p2.bmi());
}

void findMinPair(const Person persons[], int n) {
    int minI = 0, minJ = 1;
    double minVal = diff(persons[0], persons[1]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double val = diff(persons[i], persons[j]);
            if (val < minVal) {
                minVal = val;
                minI = i;
                minJ = j;
            }
        }
    }
    cout << "Двойката с минимален резултат:" << endl;
    cout << persons[minI].getName() << " и " << persons[minJ].getName() << endl;
    cout << "Резултат: " << minVal << endl;
}



int main(){
    int n;
    cin >> n;
    Person* persons = new Person[n];

    for(int i = 0; i < n; i++){
        persons[i].read();
    }
    for(int i = 0; i < n; i++){
        persons[i].print();
        cout << persons[i].getName() << " has bmi: " << persons[i].bmi() << std::endl;
        persons[i].state();
        cout << std::endl;
    }
    findMinPair(persons, n);


    if(persons != nullptr){
        delete[] persons;
    }

    return 0;
}