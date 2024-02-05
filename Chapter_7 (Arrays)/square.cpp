#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int arr[5];
    for(int i = 0 ; i<=4 ; i++)
    {
        arr[i] = i*i;
    }

    for(int i = 0 ;i <=4 ; i++)
    cout<<arr[i]<<" ";
}