#include<iostream>
#include<cstring>
using namespace std;
int maze(int sr,int sc,int er,int ec)
{
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightway=maze(sr,sc+1,er,ec);
    int downway=maze(sr+1,sc,er,ec);
    int totalway=rightway+downway;
    return totalway;
}
void path(int sr,int sc,int er,int ec,string s)
{
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec)
    {
        cout<<s<<endl;
        return;
    }
    path(sr,sc+1,er,ec,s+'R');
    path(sr+1,sc,er,ec,s+'D');
}
int main()
{
   int n,m;
   cout<<"Enter number of row:";
   cin>>n;
   cout<<"Enter number of coloum:";
   cin>>m; 
   cout<<"Number of ways:"<<maze(1,1,n,m)<<endl;
   path(1,1,n,m,"");
   
}