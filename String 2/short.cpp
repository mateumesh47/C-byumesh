#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    cout<<s<<endl;
    sort(s.begin(),s.end());
    cout<<"after sorting : "<<s;
}