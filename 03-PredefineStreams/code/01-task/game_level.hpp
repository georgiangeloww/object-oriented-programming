#ifndef _GAME_LEVEL_HPP
#define _GAME_LEVEL_HPP
#include <iostream>
#define endl '\n'


using std::ostream;
using std::istream;
using std::cerr;
using std::cout;
using std::cin;



class GameLevel {
    public:
        GameLevel(char*, int, double, int, char*);
        GameLevel(const GameLevel&);
        ~GameLevel();

        char* getNameLevel() const;
        int getLevel() const;
        double getDifficulty() const;
        int getCntOpponent() const;
        char* getDescription() const;

        void setNameLevel();
        void setLevel();
        void setDifficulty();
        void setCntOpponents();
        void setDescription();

        GameLevel& operator=(const GameLevel&);
        bool operator==(const GameLevel&) const;
        bool operator<(const GameLevel&) const;

        GameLevel& operator++();
        GameLevel operator++(int) ;

        operator int() const;

        ostream& ins(ostream&) const;
        istream& ext(istream&);


    private:
        char* nameLevel;
        int level;
        double difficulty;
        int cntOpponent;
        char* description;
};

ostream& operator<<(ostream&, const GameLevel&);
istream& operator>>(istream&, GameLevel&);

#endif