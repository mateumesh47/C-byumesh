#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    //2D matrix
    vector<vector<int>> v;
    cout<<"Enter element in matrix : ";
    for(int i=0;i<m;i++)
    {   
        vector<int>v1;
        for( int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v1.push_back(x);
        }
        v.push_back(v1);
    }
    for(int i=0;i<v.size();i++)
    {   
        for( int j=0;j<v[0].size();j++)
        {
           cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
