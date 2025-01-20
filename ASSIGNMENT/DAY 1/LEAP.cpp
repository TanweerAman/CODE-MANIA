#include<iostream>
using namespace std;
main()
{
    int y;
    cout<<"ENTER YEAR=";
    cin>>y;
    if(y % 400 == 0 || (y % 4 == 0  && y % 100 != 0))
        cout<<"LEAP YEAR";
    else
        cout<<"NOT LEAP YEAR";

}
