#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    int ch;
    cout<<"Enter number to find size of data type"<<endl<<"1->integer"<<endl<<"2->charecter"<<endl<<"3->decimal value"<<endl<<"4->double"<<endl<<"5->long"<<endl<<"6->long long"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
            int i;
            cout<<sizeof(i)<<" "<<"byte";
            break;
        case 2:
            char j;
            cout<<sizeof(j)<<" "<<"byte";
            break;
        case 3:
            float k;
            cout<<sizeof(k)<<" "<<"byte";
            break;
        case 4:
            double l;
            cout<<sizeof(l)<<" "<<"byte";
            break;
        case 5:
            long m;
            cout<<sizeof(m)<<" "<<"byte";
            break;
        case 6:
            long long n;
            cout<<sizeof(n)<<" "<<"byte";
            break;    
        default:
            cout<<"Enter correct number";  
            break;
    }
}