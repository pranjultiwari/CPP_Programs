#include<iostream>
using namespace std;
int main()
{ int n,num,k,sum=0;
cout<<"Enter the number\n";
cin>>n;
num=n;
while(n!=0)
{
    k=n%10;
    sum=sum*10+k;
    n=n/10;
}
if(num==sum)
{
    cout<<num<<" is Palindrome"<<endl;
}
else{
    cout<<num<<" is not a Palindrome"<<endl;

}

    return 0;
}