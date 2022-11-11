#include<iostream>
using namespace std;
int main()
{ int n,k,rev=0;
cout<<"Enter the number:";
cin>>n;
while(n!=0)
{k=n%10;
rev=rev*10+k;
n=n/10;

}
cout<<rev;
    return 0;
}