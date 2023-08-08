#include<iostream>
using namespace std;
int zigzag(int n)
{
    if(n==0) return 0;
    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
}
int main()
{
    int z;
    cout<<"Enter number:";
    cin>>z;
    zigzag(z);
}