#include<iostream>
using namespace std;
main()
{
int n,s=0,t;
cout<<"Enter no=";
cin>>n;
while(n>0)
{
    t=n%10;
    s=s+t;
    n=n/10;
}
cout<<"Sum="<<s<<endl;
}
