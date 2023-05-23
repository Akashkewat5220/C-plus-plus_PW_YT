#include <iostream>
using namespace std;

int natural( int num){
    int sq = num*num;
    return sq;
}

int main() {

for(int i = 1;i<=5; i++){
    cout<<natural(i)<<endl;
}

    return 0;
}