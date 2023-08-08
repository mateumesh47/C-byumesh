#include<iostream>
using namespace std;
int main()
{
    //method 1
    // int arr[3][3]={1,2,3,1,2,3,1,2,3};

    //method 2 of input
    int arr[3][3];
    for(int i=0;i<3;i++)   //number of rows
    {
        for(int j=0;j<3;j++) //number of coloum
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++)  //number of rows
    {
        for(int j=0;j<3;j++) //number of coloum
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}