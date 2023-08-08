#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of coloum :";
    cin>>n;

    int arr[m][n],tran[n][m];

    cout<<"Enter element in matrix :"<<endl;
    for(int i=0;i<m;i++)   //number of rows
    {
        for(int j=0;j<n;j++) //number of coloum
        {
            cin>>arr[i][j];
        }
    }
    
    //code for store transpose
    for(int j=0;j<n;j++)   //number of coloum
    {
        for(int i=0;i<m;i++) //number of row
        {
           tran[j][i]=arr[i][j];
        }
    }

    cout<<"Tranpose matrix : "<<endl;
    for(int i=0;i<m;i++)   
    {
        for(int j=0;j<n;j++) 
        {
          cout<<tran[i][j]<<" ";
        }
        cout<<endl;
    }
    
}