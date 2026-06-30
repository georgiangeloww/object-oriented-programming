#include "Circle.hpp"

Circle::Circle(string n, string c, int r) : Shape(n, c), r(r){}

ostream& Circle::ins(ostream& out) const {
    Shape::ins(out);
    out << ' ' << r;
    return out;
}

istream& Circle::ext(istream& in) {
    Shape::ext(in);
    in >> r;
    return in;
}