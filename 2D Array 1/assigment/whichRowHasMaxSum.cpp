#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of coloum :";
    cin>>n;

    int a[m][n];

    cout<<"Enter first matrix : "<<endl;
    for(int i=0;i<m;i++)   //number of rows
    {
        for(int j=0;j<n;j++) //number of coloum
        {
            cin>>a[i][j];
        }
    }
      
    int index=1,maximum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=a[i][j];
        }

        if(maximum<sum)
        {
            maximum=sum;
            index=i;
        }
    }
    cout<<index;
}
