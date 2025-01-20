#include<iostream>
using namespace std;
main()
{
    int n,i,f=0;
    cout<<"enter no=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      if(n%i==0)
      f++;
    }
    if(f==2)
        cout<<"PRIME";
    else
        cout<<"NOT PRIME";
}
