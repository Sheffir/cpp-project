#include <iostream>
using namespace std;
//declaring the function
int add(int a,int b){
    return a+b;
}

int main(){
    int sum;
    sum=add(1,1);
    return sum;
    cout<<"sum:"<<sum<<endl;
    return 0;
}