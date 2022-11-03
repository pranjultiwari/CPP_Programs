#include<iostream>
using namespace std;
int main()
{
    int n,i,k=1;
    cout<<"enter the number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k*=i;

    }
    cout<<"factorial of "<< n << " is: "<<k;
    return 0;
}