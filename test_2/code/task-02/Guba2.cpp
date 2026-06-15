#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Guba
{
public:
    virtual string sgotvi() = 0;
    virtual ~Guba(){}

private:
};

class Manatarka : public Guba
{
    public:
        Manatarka()=default;

        virtual string getDate() const = 0;

        virtual ~Manatarka(){}


    private:
        string date = "";
};

class Obiknovena : public Manatarka
{
public:
    Obiknovena() = default;
    Obiknovena(string date) : date(date){}

    ~Obiknovena(){}

    string sgotvi() override
    {
        return "Obiknovena manatarka... Mmm :)";
    }
    string getDate() const override{
        return date;
    }



    private:
        string date = "";
};

class Dqvolska : public Manatarka
{
public:
    Dqvolska() = default;
    Dqvolska(string date) : date(date) {}

    ~Dqvolska(){}

    string sgotvi() override
    {
        return "Dyavolska manatarka... RIP";
    }

    string getDate() const override {
        return date;
    }


    private:
        string date = "";
};



int main()
{
    string date = "";
    string token = "";
    vector<Manatarka *> manatarki;
    bool eating = true;

    while (eating){
        cin >> date;
        if(date == "XX") {
            eating = false;
        }
        else {
            cin >> token;

            if (token == "OM")
            {
                manatarki.push_back(new Obiknovena(date));
            }
            else if(token == "DM")
            {
                manatarki.push_back(new Dqvolska(date));
            }
        }
    } 
    


    string searchDate;
    cin >> searchDate;
    for(Manatarka * m : manatarki) {
        if(m->getDate() == searchDate) {
            cout << m->getDate() << " - " << m->sgotvi() << std::endl;
        }
    }
    
    
    for(Manatarka* m : manatarki) {
        delete m;
    }

    manatarki.clear();




    return 0;
}
