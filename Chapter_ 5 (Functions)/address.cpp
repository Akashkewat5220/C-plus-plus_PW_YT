#include <iostream>
using namespace std;

int main(){

    int  x = 1;
    int* y = &x;
    cout<<&x<<endl;
    cout<<&y<<endl;  //use to see address
    cout<<*y<<endl; //star operator
    // 0x61ff0c
}