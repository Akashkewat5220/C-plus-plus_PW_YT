#include <iostream>
using namespace std;

int fibo(int n){
    if (fibo(1) == 1 || fibo(2) == 1 ) return 1;
    return  fibo(n-1) + fibo(n-2);
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n; 

    cout<<fibo(n);
}