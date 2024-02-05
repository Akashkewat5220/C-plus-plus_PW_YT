#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {5,2,96,3,585,5};
    int mx = INT_MIN;
    for(int i = 0 ;i <= 5 ; i++)
    {
        mx = max(mx , arr[i]);
    }

    int sec_mx = INT_MIN;
    for(int i = 0 ; i <= 5 ; i++)
    {
        
        if(arr[i] != mx)
        sec_mx = max(sec_mx , arr[i]);
    }
    cout<<sec_mx;
}