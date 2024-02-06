#include <iostream>
using namespace std;

int main()
{
    int arr[4][2] = {{81,52} , {54,63} ,{85,25} , {74,36}};

    for(int i = 0 ; i<4 ; i++)
    {
         for(int j = 0 ; j < 2 ; j++)
         {
            cout<<arr[i][j]<<" ";
         }
         cout<<endl;
    }
}