#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
  
    int arr[m][m];
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<i;j++)
        {
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
      
    }
    
    cout<<"transpose :"<<endl;
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}