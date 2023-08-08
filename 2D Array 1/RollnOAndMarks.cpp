#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter number of coloum :";
    cin>>n;

    int arr[2][n];
    for(int i=0;i<2;i++)   //number of rows
    {
        for(int j=0;j<n;j++) //number of coloum
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<2;i++)  //number of rows
    {
        for(int j=0;j<n;j++) //number of coloum
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}