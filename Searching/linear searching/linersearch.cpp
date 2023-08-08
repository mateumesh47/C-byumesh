#include<iostream>
using namespace std;
int main()
{
    int n,search,index;
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

    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            flag=true;
            index=i;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"Element is found at position:"<<index;
    }
    else
    {
        cout<<"Element is not found";
    }
}