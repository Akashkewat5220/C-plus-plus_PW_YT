#include <iostream>
using namespace std;

int main() {

int a = 2;
int b = 3;

int temp;

temp = a;
a = b;
b= temp;

cout<<"Value of "<< a <<endl;
cout<<"Value of "<< b <<endl;

    return 0;
}