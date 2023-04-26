#include<iostream>
using namespace std;

int main() {

    int n, first , second , third , sum;

    n = 123;
    first = n /100;
    n = n%100; //23
    second = n/10; //2
    n = n%10;
    third = n;

    sum = first + second + third;
    cout<<sum<<endl;


    return 0;
}