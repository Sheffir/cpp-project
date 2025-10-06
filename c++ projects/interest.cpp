//Jeffeson Mwangi Ngugi
//DCS-03-0097/2025
#include<iostream>
using namespace  std;
float sim_interest(float p,float r,float t){
    return p*(r/100)*t;
}
int main(){
    float p,r,t,s_interest;
    s_interest=sim_interest(20000,10,12);
    cout <<"Your interest is :"<<s_interest<<endl;
    return 0;
}
