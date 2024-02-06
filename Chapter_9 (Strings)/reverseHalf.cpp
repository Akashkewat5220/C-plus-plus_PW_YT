#include <iostream>
#include<string>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string s = "Akash";
    cout<<s<<endl;

    int n =  s.length();
    reverse(s.begin()  , s.begin()+ 3);
    cout<<s;
    
}