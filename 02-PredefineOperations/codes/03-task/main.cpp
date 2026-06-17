#include "cloth.hpp"
#include <iostream>
#define endl '\n'

using std::cout;
using std::cin;



int main() {

    ClothingItem blusa("blusa", 5);
    ClothingItem teniska("teniska", 3);

    cout << blusa.operator+(teniska) << endl;

    cout << teniska - blusa << endl;

    cout << (blusa != teniska ? "true" : "false") << endl;

    teniska = blusa;
    cout << teniska << endl;

    cout << teniska++ << endl; // blusa 5 cnt = 6

    cout << ++teniska << endl; // blusa 6 cnt = 7

    cout << int(teniska) << endl;




    return 0;
}