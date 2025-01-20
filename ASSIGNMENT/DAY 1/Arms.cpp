#include<iostream>
using namespace std;
main()
{
int n,s=0,c,r;
cout<<"enter no";
cin>>n;
c=n;
while(n>0)
{
r=n%10;
s=(r*r*r)+s;
n=n/10;
}
if(c==s)
cout<<"ARMSTRONG NO";
else
cout<<"NOT ARMSTRONG NO";
}
