#include <iostream>
using namespace std;
const float p =3.14;
float volume(float r){
    return(4.0/3.0)*3*p*r*r*r;
}
int main(){
    float vol ,r;
    cout<<"Enter your radius"<<endl;
    cin>>r;
    vol = volume(r);
    cout<<"The volume is :"<<vol<<endl;
    return 0;
}