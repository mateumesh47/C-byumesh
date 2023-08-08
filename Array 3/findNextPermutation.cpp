#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> nextpermutation(vector<int>& v)
{
   
}
int main()
{
   vector<int> v;
   int n;
   cout<<"Enter the size of vector :";
   cin>>n;

   for(int i=0;i<n;i++)
   {
      int x;
      cin>>x;
      v.push_back(x);
   }

   nextpermutation(v);
   for(int i=0;i<n;i++)
   {
      cout<<v[i];
   }
}