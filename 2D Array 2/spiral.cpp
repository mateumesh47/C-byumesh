#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of coloum :";
    cin>>n;

    cout<<"Enter element in matrix : "<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++)  
    {
        for(int j=0;j<n;j++) 
        {
            cin>>arr[i][j];
        }
    }
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr && minc<=maxc)
    {   
        //for left to right
        for(int j=minc;j<=maxc;j++)
        {
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc)  break;
        //in right side top to down
        for(int i=minr;i<=maxr;i++)
        {
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc)  break;
        //at bottom right to left
        for(int j=maxc;j>=minc;j--)
        {
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc)  break;
        //at left bottom to top
        for(int i=maxr;i>=minr;i--)
        {
            cout<<arr[i][minc]<<" ";
        }
        minc++;
        if(minr>maxr || minc>maxc)  break;
    }
}
