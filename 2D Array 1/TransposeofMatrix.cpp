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
    cout<<"Enter element in matrix :"<<endl;
    for(int i=0;i<m;i++)   //number of rows
    {
        for(int j=0;j<n;j++) //number of coloum
        {
            cin>>arr[i][j];
        }
    }
    
    cout<<"Transpose form of given matrix : "<<endl;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}