#include<iostream>
using namespace std;
int main()
{ int n,i,count=0;
cout<<"Enter the number to check\n";
cin>>n;
for(i=1;i<=n;i++)
{
    if(n%i==0)
    count++;
    
}
if(count==2)
{
    cout<<n<<" is prime number.\n";
}
else
{
     cout<<n<<" is not a prime number.\n";
}

    return 0;
}