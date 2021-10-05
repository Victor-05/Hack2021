#include <iostream>

using namespace std;

int main()
{
    unsigned long long int a,b,r,a1,b1;
    cout<<"Enter 2 numbers:";

    cin>>a>>b;

    a1=a;
    b1=b;

    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }


    cout<<endl<<"The GCF of "<<a1<<" and "<<b1<<" is "<<a;
    return 0;
}
