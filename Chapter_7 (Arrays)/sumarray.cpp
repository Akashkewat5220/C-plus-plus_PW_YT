#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,8,3,6,74};
    // for(int i = 0 ; i <= 4 ; i++)
    // cout<<arr[i]<<" ";

    //sum nikalo
    int sum = 0 ;
    for(int i = 0; i <= 4 ; i++)
    {
        sum+=arr[i];
        
    }
    cout<<sum<<endl;

    //size niikalne ke liye
    cout<<sizeof(arr)<<endl;
    int mx = arr[0];
    for(int i = 1 ; i <=4 ; i++)
    mx = max(mx , arr[i]);

    cout<<mx<<endl;
}