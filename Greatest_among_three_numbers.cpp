#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers a,b,c\n";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<a<<" is the greatest";
    }
    else if(b>a&&b>c)
    {
        cout<<b<<" is the greatest";
    }
    else{
        cout<<c<<" is greatest";
    }
   
    return 0;
}