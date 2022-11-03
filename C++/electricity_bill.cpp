#include<iostream>
using namespace std;
int main()
{
    int rate1=5,rate2=10,units,bill;
    cout<<"enter the units consumed by consumer\n";
    cin>>units;
    if(units<250)
    {
        bill=rate1*units;
    }
    else{
        bill=rate2*units;
    }
    cout<<"The electricity bill is:"<<bill<<endl;

    return 0;
}