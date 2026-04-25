#include <iostream>
using std::cin;
using std::cout;
using std::endl;


class Point{
    public:
        Point() {
            x = 0;
            y = 0;
            z = 0;
        }

        Point(double px, double py, double pz) {
            x = px;
            y = py;
            z = pz;
        }

        double getX() const {
            return x;
        }
        double getY() const {
            return y;
        }
        double getZ() const {
            return z;
        }
        
        void setPoints(double px, double py, double pz) {
            x = px;
            y = py;
            z = pz;
        }

        void print() const {
            cout << "(" << x << ", " << y << ", " << z << ")"; 
        }

        void scale(double a, double b, double c){
            x = x * a;
            y = y * b;
            z = z * c;
        }

        void translate(double ax, double ay, double az){
            x = x + ax;
            y = y + ay;
            z = z + az;
        }
    
    private:
        double x;
        double y;
        double z;

};

int main(){
    int n;
    cin >> n;

    Point* points = new Point[n];
    
    for(int i = 0; i < n; i++){
        double x, y, z;
        cin >> x >> y >> z;
        points[i] = Point(x, y, z);
    }

    // scale for the first task:
    // for(int i = 0; i < n; i++) { 
    //     points[i].scale(-2, 0.5, 5);
    // }
    
    // second task:
    for(int i = 0;i < n; i++) {
        points[i].scale(1, 0.25, 1);
        points[i].translate(0, 0, 4);
    }
    
    for(int i = 0; i < n; i++) {
        points[i].print();
    }   

    if(points != nullptr){
        delete[] points;
    }

    return 0;
}