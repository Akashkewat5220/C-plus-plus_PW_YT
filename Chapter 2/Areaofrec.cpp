#include <iostream>
using namespace std;

int main(){
    int l = 10;
    int b = 10;
    int Area = l*b;
    cout<<Area<<endl;
    int Peri = 2*(l+b);
    cout<<Peri<<endl;
    if(Area > Peri){
        cout<<"Area is Greater than Perimeter";
    }
    else{
        cout<< "Area is not greater than its perimeter";
    }


}