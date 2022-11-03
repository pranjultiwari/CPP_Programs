#include<iostream>
#include<math.h>
using namespace std;
int main()
{ int a,b,choice,Calculations;
cout<<"Enter the value of a and b\n";
cin>>a>>b;
cout<<"Enter the choice\n";
cin>>Calculations;
switch (Calculations)
{
case 1: cout<<a+b;
    break;
case 2: cout<<a-b;
    break;

case 3: cout<<a*b;
    break;

case 4: cout<<a/b;
    break;

case 5:cout<<a%b;
    break;

case 6: cout<<pow(a,b);
    break;


default:cout<<"wrong choice\n";
    break;
}
    return 0;
}