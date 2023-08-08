#include<iostream>
using namespace std;
// int sum(int n)
// {
//     if(n==0) return 0;
//     int s=n+sum(n-1);
//     return s;
// }
void sum1toN(int sum,int n)
{
    if(n==0)
    {
        cout<<sum<<endl;
        return;
    }
    sum1toN(sum+n,n-1);
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    sum1toN(0,n);
}