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
    virtual ~Manatarka(){}

};

class Obiknovena : public Manatarka
{
public:
    Obiknovena() = default;
    ~Obiknovena(){}

    string sgotvi() override
    {
        return "Obiknovena manatarka... Mmm :)";
    }

    bool otrovna()
    {
        return 0;
    }
};

class Dqvolska : public Manatarka
{
public:
    Dqvolska() = default;
    ~Dqvolska(){}

    string sgotvi() override
    {
        return "Dyavolska manatarka... RIP";
    }

    bool otrovna()
    {
        return 1;
    }
};

int main()
{

    string token = "";
    vector<Manatarka *> manatarki;


    while (token != "XX")
    {
        cin >> token;
        if (token == "OM")
        {
            manatarki.push_back(new Obiknovena());
        }
        else if(token == "DM")
        {
            manatarki.push_back(new Dqvolska());
        }
    }


    bool flag = false;

    for(Manatarka * m : manatarki) {
        if(!flag) {
            cout << m->sgotvi() << std::endl;
        }

        if(m->sgotvi() == "Dyavolska manatarka... RIP"){
            flag = true;
        }
        delete m;
        m = nullptr;
    }
    manatarki.clear();




    return 0;
}
