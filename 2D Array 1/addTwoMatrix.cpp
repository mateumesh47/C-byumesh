#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of coloum :";
    cin>>n;

    int a[m][n],b[m][n],res[m][n];

    cout<<"Enter first matrix : "<<endl;
    for(int i=0;i<m;i++)   //number of rows
    {
        for(j=0;j<n;j++) //number of coloum
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter second matrix : "<<endl;
    for(int i=0;i<m;i++)   //number of rows
    {
        for(j=0;j<n;j++) //number of coloum
        {
            cin>>b[i][j];
        }
    }
      
     cout<<"Addition of first and second matrix : "<<endl; 
    for(i=0;i<m;i++)   //number of rows
    {
        for(j=0;j<n;j++) //number of coloum
        {
           res[i][j] = a[i][j] + b[i][j];
           cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}