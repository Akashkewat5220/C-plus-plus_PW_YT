#include <iostream>
using namespace std;

int main(){
    int a , b , c ;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a+b >c and b+c>a and( c +a) >b){
        cout<<"Given sides are sides of the triangle";
    }
    else{
        cout<<"Not sides of triangle";
    }


}