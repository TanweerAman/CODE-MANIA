#include <iostream>
using namespace std;
int main()
{
    int n,s=0,r,t;
    cout<<"enter no="<<endl;
    cin>>n;
    t=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(t==s)
        cout<<"PALINDROME NO";
    else
        cout<<"NOT PALINDROME NO";
}
