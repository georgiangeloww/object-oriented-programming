#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

class Vector2D {
    public:
        Vector2D() {
            cout << "default construct!" << endl; 
        }

        Vector2D(double x, double y) : x(x), y(y) {
            cout << "Констуктор с парам!" << endl;
        }

        double getX() const
        {
            cout << "getx" << endl;
            return x;
        }
        double getY() const
        {
            cout << "gety" << endl;
            return y;
        }

        Vector2D operator+(const Vector2D& rhs) const
        {
            return Vector2D(x + rhs.x, y + rhs.y);
        }

        Vector2D operator*(double scalar) const
        {
            cout << "вектор със скалар" << endl;
            return Vector2D(x * scalar, y * scalar);
        }

        Vector2D operator*(const Vector2D& rhs) const {
            return Vector2D(x * rhs.x, y * rhs.y);
        }

        bool operator==(const Vector2D& rhs) const {
            return x == rhs.x && y == rhs.y;
        }

        ostream& ins(ostream &out) const
        {
            cout << "ins" << endl;
            out << x << ' ' << y;
            return out;
        }

        istream& ext(istream &in) {
            cout << "ext" << endl;
            in >> x >> y;
            return in;
        }

    private:
        double x, y;
};

ostream& operator<<(ostream& out, const Vector2D& rhs) {
    rhs.ins(out);
    return out;
}

istream& operator>>(istream& in, Vector2D& rhs) {
    rhs.ext(in);
    return in;
}

Vector2D operator*(double scalar, const Vector2D& v){
    cout << "скалар с вектор" << endl;
    return v * scalar;
}

int main()
{
    Vector2D a(5.0, 8.0);
    Vector2D b(4.0, 9.0);

    cout << (2 * a) << endl;

    cout << (a * 3) << endl;

    cout << (a * b) << endl;

    cout << (a * 5) << endl;

    cout << (a + b) << endl;

    Vector2D c;

    cin >> c;

    cout << c << endl;

    return 0;
}