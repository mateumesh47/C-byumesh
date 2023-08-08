#include<iostream>
using namespace std;
int print(int n)
{
    if(n<=0) return 1;
    print(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    print(n);
}