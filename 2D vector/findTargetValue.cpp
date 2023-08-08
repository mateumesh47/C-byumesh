#include<iostream>
#include<vector>
using namespace std;
bool value(vector<vector<int>>& v,int target)
{
    int row=v.size();
    int cols=v[0].size();
    int i=0;
    int j=cols-1;
    while(i<=row && j>=0)
    {
        if(v[i][j]==target) return true ;
        else if (v[i][j]>target) j--;
        else i++;
    }
    return false;
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
    
    int target;
    cout<<"Enter target value : ";
    cin>>target;

    bool a=value(v,target);
    if(a) cout<<"true";
    else cout<<"false";
}