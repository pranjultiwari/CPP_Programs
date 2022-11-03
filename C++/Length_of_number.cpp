#include<iostream>
using namespace std;
int main()
{int n,i,k,num,count=0;
cout<<"enter a number\n";
cin>>n;
num=n;
while(n!=0)
{k=n%10;
n=n/10;
 count++;

}
cout<<"the length of the digit is:"<<count;

    return 0;
}