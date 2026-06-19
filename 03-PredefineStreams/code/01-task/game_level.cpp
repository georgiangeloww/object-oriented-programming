#include "game_level.hpp"

GameLevel::GameLevel(char* nameLevel, int level, double difficulty, int cntOpponent, char* description) 
: level(level), difficulty(difficulty), cntOpponent(cntOpponent) {
    this->nameLevel = new char[strlen(nameLevel) + 1];
    strcpy(this->nameLevel, nameLevel);

    this->description = new char[strlen(description) + 1];
    strcpy(this->description, description);
}

GameLevel::GameLevel(const GameLevel& rhs) {
    this->nameLevel = new char[strlen(rhs.nameLevel) + 1];
    strcpy(this->nameLevel, rhs.nameLevel);

    this->description = new char[strlen(rhs.description) + 1];
    strcpy(this->description, rhs.description);

    level = rhs.level;
    difficulty = rhs.difficulty;
    cntOpponent = rhs.cntOpponent;
}
    
GameLevel::~GameLevel() {
    delete[] nameLevel;
    delete[] description;
}

char* GameLevel::getNameLevel() const {
    if(strlen(nameLevel) > 50) {
        cerr << "Error: please enter a shorter level name (max 50 characters)!";
    }
    return nameLevel;
}
int GameLevel::getLevel() const {return level;}
double GameLevel::getDifficulty() const {return difficulty;}
int GameLevel::getCntOpponent() const {return cntOpponent;}
char* GameLevel::getDescription() const {
    if(strlen(description) > 200) {
        cerr << "Error: please enter a shorter desciption (max 200 characters)!";
    }
    return description;
}



GameLevel& GameLevel::operator=(const GameLevel& rhs) {
    if(this == &rhs) {
        return *this;
    }
    delete[] nameLevel;

    this->nameLevel = new char[strlen(rhs.nameLevel) + 1];
    strcpy(this->nameLevel, rhs.nameLevel);

    delete[] description;

    this->description = new char[strlen(rhs.description) + 1];
    strcpy(this->description, rhs.description);

    level = rhs.level;
    difficulty = rhs.difficulty;
    cntOpponent = rhs.cntOpponent;

    return *this;
}

bool GameLevel::operator==(const GameLevel& rhs) const {
    return level == rhs.level;
}

bool GameLevel::operator<(const GameLevel& rhs) const {
    return difficulty < rhs.difficulty;
}

GameLevel& GameLevel::operator++() {
    cntOpponent++;
    return *this;
}

GameLevel GameLevel::operator++(int) {
    GameLevel temp = *this;
    cntOpponent++;
    return temp;
}

ostream& GameLevel::ins(ostream& out) const {
    out << "Information about the first level:" << endl
        << "Level name: "   << nameLevel   << endl
        << "Level number: " << level       << endl
        << "Difficulty: "   << difficulty  << endl
        << "Enemy count: "  << cntOpponent << endl
        << "Description: "  << description << endl;
    return out;
}

istream& GameLevel::ext(istream& in) {
    in  >> nameLevel 
        >> level 
        >> difficulty
        >> cntOpponent
        >> description;
    return in;
}

GameLevel::operator int() const{
    return level;
}

ostream& operator<<(ostream& out, const GameLevel& rhs) {
    rhs.ins(out);
    return out;
}

istream& operator>>(istream& in, GameLevel& rhs) {
    rhs.ext(in);
    return in;
}