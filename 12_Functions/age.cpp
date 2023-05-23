#include<iostream>
using namespace std;

int vote(int age){
    if (age <= 18){
        cout<<"Person is not able to vote"<<endl;
    } else {
        cout<<"Person is able to give the vote"<<endl;
    }
    
}

int main () {

vote(25);

    return 0 ;
}