#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"enter any year :";
    cin>>y;

    if((y%4==0 || y%400==0) && y%100!=0)
    {
        cout<<"Emtered year is leap year";
    }
    else
    {
        cout<<"Entered year is not leap year";
    }
}