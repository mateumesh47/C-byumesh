#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> & a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    vector<int> v;

    v.push_back(0);         
    v.push_back(4);   
    v.push_back(7);   
    v.push_back(3);   
    v.push_back(8);              
    v.push_back(2);   
    v.push_back(1);   
    v.push_back(9);   
    v.push_back(5);

    display(v);
}