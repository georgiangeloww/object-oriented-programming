#ifndef _CLOTH_HPP
#define _CLOTH_HPP

#include <cmath>
#include <iostream>



class ClothingItem {
    public:
        ClothingItem(char*, int);

        ~ClothingItem();

        int operator+(const ClothingItem&) const;

        int operator-(const ClothingItem&) const;

        bool operator!=(const ClothingItem&) const;

        ClothingItem& operator=(const ClothingItem&);

        ClothingItem (const ClothingItem& rhs);

        ClothingItem& operator+=(const ClothingItem&);

        operator int() const;

        ClothingItem& operator++();
        ClothingItem operator++(int);

        std::ostream& ins(std::ostream&) const;


        


    private:
        char* name;
        int cnt;
};

std::ostream& operator<<(std::ostream&, const ClothingItem&);


#endif