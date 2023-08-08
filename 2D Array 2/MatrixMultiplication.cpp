#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows of first matrix : ";
    cin>>m;
    cout<<"Enter number of coloum of first matrix :";
    cin>>n;

    int p,q;
    cout<<"Enter number of rows of second matrix : ";
    cin>>p;
    cout<<"Enter number of coloum of second matrix :";
    cin>>q;

    if(n==q)
    {
       int a[m][n];
       cout<<"Enter element in first matrix :"<<endl;
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
              cin>>a[i][j];
           }
       }        
        
       int b[p][q];
       cout<<"Enter element in second matrix :"<<endl;
       for(int i=0;i<p;i++)
       {
           for(int j=0;j<q;j++)
           {
              cin>>b[i][j];
           }
       }        

        int res[m][q];
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<q;j++)
           {
              int sum=0;
              for(int k=0;k<q;k++)
              {
                sum+=a[i][k]*b[k][j];
              }
              res[i][j]=sum;
           }
        }        
        
        cout<<"multiplication : "<<endl;
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<q;j++)
           {
             cout<<res[i][j]<<" ";
           }
           cout<<endl;
        }        
    }
    else
    {
        cout<<"the matrix cann't be multiplied";
    }
}