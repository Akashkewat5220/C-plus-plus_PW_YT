#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"length: "<<a<<endl;
    cout<<"breadth: "<<b<<endl;

    if(a==b){
        cout<<"it is an square"<<endl;
    } else {
        cout<<"it is an rectangle"<<endl;

    }

    return 0;
}