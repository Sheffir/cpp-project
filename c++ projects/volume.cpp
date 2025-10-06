//Jeffeson Mwangi Ngugi
//DCS-03-0097/2025
#include<iostream>
using namespace std;
//constant pi
const float p =3.14;
//declaring function
float volume(float r,float h){
    return p*r*r*h;
}
int main(){
    float vol = volume(7,21);
    cout<<"The volume is:"<<vol<<endl;
    return 0;
}
