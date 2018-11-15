#include <iostream>

using namespace std;

int main()
{
    int a,max=0;

    do
    {

    cout<<"Masukkan bilangan: ";
    cin>>a;

    if(max<a)
    max=a;

    }

    while (a!=0);
    cout<<" Bilangan terbesar:"<<max;
    return 0;
}

