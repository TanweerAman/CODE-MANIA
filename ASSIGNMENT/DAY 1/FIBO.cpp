#include<iostream>
using namespace std;
main()
{
    int n,i,a=0,b=1,c;
    cout<<"enter range=";
    cin>>n;
    cout<<"fibo series"<<endl;
    for(i=0;i<=n;i++){
    cout<<a<<endl;
    c=a+b;
    a=b;
    b=c;
    }
}
