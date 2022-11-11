#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,count=0,sum=0;
    cout<<"enter the number\n";
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
  for(i=1;i<=count;i++)
  {
    sum+=n % pow(10,i)/pow(10,i-1);
  }
    cout<<sum;
    return 0;
}