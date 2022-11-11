#include<iostream>
using namespace std;
int factorial(int a){
    int i,fact=1;
    for (i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
}
int main()
{ int n;
   cin>>n;
   factorial(n);

    return 0;
}