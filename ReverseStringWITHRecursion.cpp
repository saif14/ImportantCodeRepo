#include<iostream>
#include<algorithm>

using namespace std;

//This program reverse a String using Recursion
//int l indicates lower bound
//int h indicates higer bound

void reverse(string &str, int l, int h)
{
    if(l<h)
    {
        swap(str[l], str[h]);
        reverse(str, l+1, h-1);
    }

}


int main()
{
    string str = "Saif Mahmud Parvez";
    string cpy_str = str;

    reverse(cpy_str, 0, str.length()-1);

    cout<<"Original String: "<<str<<endl<<"Reverse String: "<<cpy_str;
}