
#include<iostream>
using namespace std;


class Vector3D{
    public:
        float x, y, z;

        Vector3D(){}
        Vector3D(const Vector3D &a):x(a.x), y(a.y), z(a.z) {}
        Vector3D(float x1, float y1, float z1):x(x1), y(y1), z(z1){}



};




int main()
{
        Vector3D vector = Vector3D(1.0,0.0,1.0);

        cout<<"Hello world!";
        cout<<vector.x<<endl;
}