#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    cout<<"Enter elements in array :";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];
    
    for(int i=1;i<n;i++)
    {
       if(max<arr[i])  max=arr[i];
    }

    cout<<"Greatest number in array is = "<<max;

}