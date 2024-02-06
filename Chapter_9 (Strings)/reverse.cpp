#include <iostream>
#include<string>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string s = "Akash is a boy";
    cout<<s<<endl;

    reverse(s.begin() , s.end());
    cout<<s<<endl;
    
}