#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) 
{
    int n=strs.size();
    if(n==1) return strs[0];
    sort(strs.begin(),strs.end());
    string first=strs[0];
    string last=strs[n-1];
    string s="";
    for(int i=0;i<(min(first.size(),last.size()));i++)
    {
        if(first[i]==last[i])
        {
            s=s+first[i];
        }
        else return s;
    }
    return s;
}
int main()
{
   vector<string> strs;
   strs.push_back("flower");
   strs.push_back("flow");
   strs.push_back("flight");

   string s= longestCommonPrefix(strs);
   cout<<s;
}