#include<iostream>
using namespace std;
int sum(int x,int y)
{
    if(x>y) return 0;
    if(x%2==0) return sum(x+1,y);
    return x+sum(x+2,y);
}
int main()
{
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter last number:";
    cin>>b;
    cout<<sum(a,b);
}