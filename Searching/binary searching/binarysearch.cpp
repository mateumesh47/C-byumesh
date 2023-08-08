#include<iostream>
using namespace std;
int main()
{
    int n,search;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter element in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a searching element:";
    cin>>search;

    int lo=0,hi=n-1,mid;
    bool flag=false;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(arr[mid]==search)
        {
            flag=true;
            cout<<"Element is found at position:"<<mid;
            break;
        }
        else if(arr[mid]<search)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }

    if(flag==false)
    {
        cout<<"Element is not found";
    }
}