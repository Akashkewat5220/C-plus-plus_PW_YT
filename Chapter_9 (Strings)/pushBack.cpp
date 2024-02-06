#include <iostream>
using namespace std;


int main()
{
    string s = "shy";
    cout<<s<<endl;
    s.push_back('F');
    cout<<s<<endl;

    //pop back ka use
    s.pop_back();
    cout<<s<<endl;

    //append ka use;
    s.append("happy");
    cout<<s<<endl;

    //length will also change while doing operations
}