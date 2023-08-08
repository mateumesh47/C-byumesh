#include<iostream>
#include<limits>
using namespace std;
void printmax(int arr[],int n,int idx,int max)
{
    if(idx==n)
    {
        cout<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    printmax(arr,n,idx+1,max);
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
    printmax(arr,n,0,INT_MAX);
}