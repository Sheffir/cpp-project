#include <iostream>
using namespace std;
void number (int a){
    if(a%2 == 0){
    cout<<"The number is even"<<endl;
    }else{
        cout<<"The number is odd";
    }
}
int main(){
    number(3);
    return 0;
}
