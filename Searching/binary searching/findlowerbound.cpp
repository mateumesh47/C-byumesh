#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter shorted element in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter a target";
    cin>>x;

    int lo=0,hi=n-1;
    bool flag=false;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x)
        {
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x)
        {
            lo=mid+1;
        }
        else if(arr[mid]>x)
        {
            hi=mid-1;
        }
    }
    if(flag==false)
    {
        cout<<arr[hi];
    }
}