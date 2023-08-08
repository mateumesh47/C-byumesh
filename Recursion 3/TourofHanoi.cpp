#include<iostream>
using namespace std;
void TourofHanoi(int n,char a,char b,char c)
{
    if(n==0) return;
    TourofHanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    TourofHanoi(n-1,b,a,c);
}
int main()
{
    int h;
    cout<<"Enter number of hanoi:";
    cin>>h;
    TourofHanoi(h,'A','B','C');
    return 0;
}