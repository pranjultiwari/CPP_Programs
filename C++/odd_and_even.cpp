#include<iostream>
using namespace std;
int main()
{
    int number,i;
    
    cout<<"Input the limit\n";
    cin>>number;
    cout<<"odd numbers are:\n";

    // this loop prints all the odd numbers.

    for(i=0;i<number;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }

    cout<<"even numbers are:\n";

    // this loop prints all the even numbers.

   for(i=0;i<number;i++)
    {
        if(i%2==0 && i!=0)
        {
            cout<<i<<endl;
        }
    }
    

    return 0;
}