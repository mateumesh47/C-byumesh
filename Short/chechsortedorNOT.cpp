#include<iostream>
using namespace std;
bool check(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
           return false;
        }
        return true;
    }
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     
    bool flag=check(n,arr);
    if(flag==true)
    {
        cout<<"sorted";
    }
    else
    {
        cout<<"not sorted";
    }
}