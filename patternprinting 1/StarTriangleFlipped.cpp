#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of row :";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        //for space
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
       
        //for star
        for(int k=1;k<=i;k++)
        {
            cout<<"*";  
        }
        cout<<endl;
    }
    
}