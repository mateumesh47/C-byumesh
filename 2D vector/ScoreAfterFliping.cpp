#include<iostream>
#include<vector>
using namespace std;
int matrixscore(vector<vector<int>>& m)
{
    int row=m.size();
    int cols=m[0].size();
    for(int i=0;i<row;i++)
    {
        if(m[i][0]==0)
        {
            for(int j=0;j<cols;j++)
            {
                if(m[i][j]==0)  m[i][j]=1;
                else m[i][j]=0;
            }
        }
    }

    for(int j=0;j<cols;j++)
    {
        int noz=0;
        int noo=0;
        for(int i=0;i<row;i++)
        {
            if(m[i][j]==0) noz++;
            else noo++;
        }

        if(noz>noo)
        {
            for(int i=0;i<row;i++)
            {
                if(m[i][j]==0)  m[i][j]=1;
                else m[i][j]=0;
            }
        }
    }

    int sum=0;
    for(int i=0;i<row;i++)
    {   int x=1;
        for(int j=cols-1;j>=0;j--)
        {
            sum=sum+(m[i][j]*x);
            x=x*2;
        }
    }
    return sum;
}
int main()
{
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    //2D matrix
    vector<vector<int>> v;
    cout<<"Enter only 1 and 0 in matrix : ";
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
    
    int maxs=matrixscore(v);
    cout<<"maximum score of matrix is : "<<maxs;
}