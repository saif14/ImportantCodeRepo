#include<iostream>
#include<cmath>
using namespace std;

int reverse(int a)
{
    int out=0;
    while (a>0)
    {
        int temp = a%10;
        cout<<"temp "<<temp<<" ";
        out = out*10;
        out = out+temp;
        a=a/10;
    }

    return out;

}

int main()
{
    int a;
    cin>>a;
    int rev = reverse(a);
    cout<<a<<endl<<rev;

}
