#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter shorted element in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int lo=0,hi=n-1,ans=0;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid)
        {
            lo=mid+1;
        }
        else
        {
           ans=mid;
           hi=mid-1;
        }
    } 
    cout<<ans; 
}