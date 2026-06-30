#include "Shape.hpp"

Shape::Shape(string n, string c) : name(n), color(c) {}

ostream& Shape::ins(ostream& out) const {
    out << name << ' ' << color;
    return out;
}

istream& Shape::ext(istream& in) {
    in >> name >> color;
    return in;
}

ostream& operator<<(ostream& out, const Shape& rhs) {
    rhs.ins(out);
    return out;
}

istream& operator>>(istream& in, Shape& rhs) {
    rhs.ext(in);
    return in;
}