//Jeffeson Mwangi Ngugi
//DCS-03-0097/2025
#include <iostream>
using namespace std;
class room{
    public:
    float length,breadth,height;
    double calculate_area(){
        return length*breadth;
    }
    double calculate_vol(){
        return length*breadth*height;
    }

};
int main (){
    //object
    room Room1;
    float area,volume;
    Room1.length=15;
    Room1.breadth=20;
    Room1.height=30;
    area=Room1.calculate_area();
    volume=Room1.calculate_vol();
    cout<<"The Area is :"<<area<<endl;
    cout<<"The Volume is :"<<volume<<endl;
    return 0;
}
