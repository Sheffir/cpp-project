//Jeffeson Mwangi Ngugi
//DCS-03-0097/2025
#include <iostream>
using namespace std;
class cylinder{
    public:
    const float p =3.14;
    float r ,h;
   float calculate_volume() {
        return p*r*r*h;
    }
    float calculate_SurfaceArea(){
        return(2*p*r*r)+(2*p*r*h);
    }
};
    int main(){
        float volume,sur_area;
        cylinder cylinder1;
        cylinder1.r=21;
        cylinder1.h=15;
        volume=cylinder1.calculate_volume();
        sur_area=cylinder1.calculate_SurfaceArea();
        cout<<"The volume is "<<volume<<endl;
        cout<<"The surface area is "<<sur_area<<endl;
        return 0;
    }
