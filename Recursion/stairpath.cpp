#include<iostream>
using namespace std;
int stair(int n)
{
    if(n==2) return 2;
    if(n==1) return 1;
    if(n==0) cout<<"There are no no. of ways";
    return stair(n-1)+stair(n-2);
}
int main()
{
    int s;
    cout<<"Enter number of stair:";
    cin>>s;
    cout<<stair(s);
}