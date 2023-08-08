#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of coloum :";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++)  
    {
        for(int j=0;j<n;j++) 
        {
            cin>>arr[i][j];
        }
    }

    for(int j=n-1;j>=0;j--)  
    {
        if(j%2==0)
        {
           for(int i=0;i<m;i++) 
           { 
             cout<<arr[i][j]<<" ";
           }
        }
        else
        {
            for(int i=m-1;i>=0;i--) 
           {
             cout<<arr[i][j]<<" ";
           }
        }
    }
}