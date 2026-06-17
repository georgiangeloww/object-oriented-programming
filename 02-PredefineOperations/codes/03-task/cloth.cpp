#include "cloth.hpp"


ClothingItem::ClothingItem(char* name, int cnt) : cnt(cnt) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

ClothingItem::~ClothingItem() {
    if(name != nullptr) {
        delete[] name;
    }
    name = nullptr;
}

int ClothingItem::operator+(const ClothingItem& rhs) const{
    return cnt + rhs.cnt;
}

int ClothingItem::operator-(const ClothingItem& rhs) const{
    return abs(cnt - rhs.cnt);
}

bool ClothingItem::operator!=(const ClothingItem& rhs) const{
    return cnt != rhs.cnt;
}

ClothingItem& ClothingItem::operator=(const ClothingItem& rhs) {
    if(this != &rhs) {
        if(name != nullptr) delete[] name;
        name = new char[strlen(rhs.name) + 1];
        strcpy(name, rhs.name);
        cnt = rhs.cnt;
    }
    return *this;
}

ClothingItem::ClothingItem(const ClothingItem& rhs) : cnt(rhs.cnt) {
    name = new char[strlen(rhs.name) + 1];
    strcpy(name, rhs.name);
}

ClothingItem& ClothingItem::operator+=(const ClothingItem& rhs) {
    cnt += rhs.cnt;
    return *this;
}

ClothingItem& ClothingItem::operator++(){
    cnt++;
    return *this;
}

ClothingItem ClothingItem::operator++(int) {
    ClothingItem tmp = *this;
    cnt++;
    return tmp;
}

ClothingItem::operator int() const{
    return cnt;
}

std::ostream& ClothingItem::ins(std::ostream& out) const{
    out << name << ' ' << cnt;
    return out;
}

std::ostream& operator<<(std::ostream& out, const ClothingItem& rhs) {
    rhs.ins(out);
    return out;
}
