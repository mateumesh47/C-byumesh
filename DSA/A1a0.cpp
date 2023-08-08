#include<iostream>
using namespace std;
int find(char ch)
{
    int n;
    n=(int)ch;
    if(n>=65 && n<=90)
    {
        return 1;
    }
    if(n>=97 && n<=122)
    {
        return 0;
    }
    return -1;
}
int main()
{
   char ch;
   cout<<"Enter any charecter:";
   cin>>ch;
   
   cout<<find(ch);
}