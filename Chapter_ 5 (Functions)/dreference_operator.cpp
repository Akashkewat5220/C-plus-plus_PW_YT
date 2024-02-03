#include <iostream>
using namespace std;

int main() {

    int x = 1 ;
    int *y = &x;
    *y = 5;
    cout<<x<<endl;

}