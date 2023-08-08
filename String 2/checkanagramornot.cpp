#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter 1st string : ";
    getline(cin,s);
    sort(s.begin(),s.end());
   

    string t;
    cout<<"Enter 2nd string : ";
    getline(cin,t);
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t<<endl;

    if(s==t) cout<<"Entered string are anagram of each other";
    else cout<<"Entered string are not anagram of each other";
}