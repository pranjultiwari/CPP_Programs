#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character\n";
    cin>>ch;
    if( ch>=97&&ch<=122)
    {
        cout<<"character is small alphabet\n";
    }
    else if( ch>=65&&ch<=90)
    {
        cout<<"character is capital alphabet\n";
    }
    else if( ch>=47&&ch<=57)
    {
        cout<<"character is digit\n";
    }
    else{
        cout<<"you entered a special character\n";
    }
    return 0;
}