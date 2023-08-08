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
    for(int i=0;i<m;i++)   //number of rows
    {
        for(int j=0;j<n;j++) //number of coloum
        {
            cin>>arr[i][j];
        }
    }

    int sum=0;
    for(int i=0;i<m;i++)  //number of rows
    {
        for(int j=0;j<n;j++) //number of coloum
        {
            sum=sum+arr[i][j];
        }
    }

    cout<<"Sum of all enement in 2D array is : "<<sum;
}