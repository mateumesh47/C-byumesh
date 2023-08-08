#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter a words: ";
    getline(cin,s);
    int n=s.size();
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            c++;
        }
    }
    cout<<"Number of consonant : "<<n-c;
}