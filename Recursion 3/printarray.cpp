#include<iostream>
using namespace std;
void display(int arr[],int n,int idx)
{
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array element:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    display(arr,n,0);
}