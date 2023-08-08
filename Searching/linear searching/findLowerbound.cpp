#include<iostream>
using namespace std;
int main()
{
    int n,search,index;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter shorted element in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a searching element:";
    cin>>search;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>search)
        {
            cout<<arr[i-1];
            break;
        }
    }
}