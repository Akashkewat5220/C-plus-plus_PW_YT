#include <iostream>
using namespace std;

float Area(int num){
    float ar = 3.14*(num*num);
    return ar;
}

float circum(int num){
    float cir = 2*3.14*num;
    return cir;
}

int main(){

cout<<Area(3)<<endl;
cout<<circum(3)<<endl;



    return 0;
}