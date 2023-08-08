#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0) return 0;
    int s=n+sum(n-1);
    return s;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<sum(n);
}