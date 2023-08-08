#include<iostream>
using namespace std;
int main()
{
    int n,target;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter shorted element in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target:";
    cin>>target;

    int lo=0,hi=n-1,ans=0;
    bool flag=false;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target)
        {
            if(mid==0)
            {
                flag=true;
                cout<<"first occurence index:"<<mid;
                break;
            }
            else if(arr[mid-1]!=target)
            {
                flag=true;
                cout<<"first occurence index:"<<mid;
                break;
            }
            else
            {
                hi=mid-1;
            }
        }
        else if(arr[mid]<target)
        {
            lo=mid+1;
        }
        else if(arr[mid]>target)
        {
            hi=mid-1;
        }
    } 

    if(flag==false)
    {
        cout<<-1;
    }
}