#include<iostream>
using namespace std;
int main()
{int a=0,b=1,i,n,fibo;
cout<<"enter the number of terms of fibonacci series\n ";
cin>>n;
cout<<"0\t1\t";
for(i=1;i<n-1;i++)
{
  fibo=a+b;
  cout<<fibo<<"\t";
  a=b;
  b=fibo;
}

    return 0;
}