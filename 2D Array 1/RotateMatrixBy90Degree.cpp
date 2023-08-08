#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;


    int arr[m][m];
    for(int i=0;i<m;i++)   //number of rows
    {
        for(int j=0;j<m;j++) //number of coloum
        {
            cin>>arr[i][j];
        }
    }
    
    //code for tranpose
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<i;j++)
        {
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
    }
    
    //code for reverse row
    for(int k=0;k<m;k++) 
    {
       int i = 0;
       int j = m-1; 
       while(i<=j)
       {
           int temp=arr[k][i];
           arr[k][i]=arr[k][j];
           arr[k][j]=temp;
           i++;
           j--;
        }
    }
   
    cout<<"90 degree roteted matrix : "<<endl;
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<m;j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}