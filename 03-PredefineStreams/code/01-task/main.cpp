#include "game_level.hpp"

int main() {
    GameLevel first ("Forest", 1, 2.5, 10, "First level in the forest.");
    GameLevel second ("Desert", 2, 3.0, 15, "Second level in the desert.");

    cout << first << endl;
    cout << second << endl;

    if (first != second) cout << "The levels have different numbers.";
    else cout << "The levels have same numbers.";
    cout << endl;


    if (first < second) cout << "Level " << first.getNameLevel() << " has a lower difficulty than level " << second.getNameLevel();
    else if (first > second) cout << "Level " << first.getNameLevel() << " has a higher difficulty than level " << second.getNameLevel();
    else cout << "Level " << first.getNameLevel() << " has a equal difficulty than level " << second.getNameLevel();
    cout << endl;


    first++;
    cout << "Enemy count in the first level after incrementing: " << first.getCntOpponent() << endl;

    ++second;
    cout << "Enemy count in the second level after incrementing: " << second.getCntOpponent() << endl;





    return 0;
}