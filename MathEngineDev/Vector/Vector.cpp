
#include<iostream>
#include<cmath>

using namespace std;

/**
        * Access the individual components of the vector (x, y, and z).
        * Assign one vector to another.
        * Compare two vectors for equality.
        * Set a vector to the zero vector.
        * Negate a vector.
        * Compute the magnitude of a vector.
        * Multiply or divide a vector by a scalar.
        * Normalize a vector.
        * Add or subtract two vectors.
        * Compute the distance between two points (expressed as vectors).
        * Compute the dot product of two vectors.
        * Compute the cross product of two vectors.
**/

class Vector3D{
    public:
        float x, y, z;

        Vector3D(){}
        Vector3D(const Vector3D &a):x(a.x), y(a.y), z(a.z) {}
        Vector3D(float x1, float y1, float z1):x(x1), y(y1), z(z1){}

        
        //operator "=" overloading
        //returning reference to the l value
        Vector3D& operator = (const Vector3D &a){
                x = a.x; y = a.y; z = a.z;
                return *this;
        }

        //operator "==" overloading
        bool operator == (const Vector3D &a) {
                return x == a.x && y == a.y && z == a.z;
        }

        Vector3D& toZero(){
                x = y = z = 0;
                return *this;
        }

        Vector3D& operator-() {
                x = -x; y = -y; z = -z;
                return this*
        }

        float magnitude(){
                float s = x*x + y*y + z*z;
                return sqrt(s);
        }
        
//        Vector3D operator* (float x){

//        }

        void print(){
                cout<<"["<<x<<" "<<y<<" "<<z<<"]"<<endl;
        }

};




int main()
{
        Vector3D vector = Vector3D(1.0,0.0,1.0);
        vector.print();
        -vector;
        vector.print();
        cout<<"mag = "<<vector.magnitude()<<endl;
        vector.toZero();
        vector.print();
}