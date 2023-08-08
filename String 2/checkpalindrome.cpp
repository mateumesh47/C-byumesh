#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a word : ";
    cin>>s;
    stringstream ss(s);


   reverse(ss.begin(),ss.end());
   cout<<s<<endl;
   if(ss==vs)
   {
    cout<<"pallindrome";
   }
   else
   {
    cout<<"not pallindrome";
   }
}