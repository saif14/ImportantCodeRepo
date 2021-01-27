#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

//No Recursion is using here. Only Iteration is being used in here
//In this code, I am using stack.
//Pushing the chars in the stack and popped it back!


void reverse (string &str)
{

    int begin = 0;
    int end = str.length()-1;

    while (begin < end)
    {
        swap(str[begin++], str[end--]);
    }
    
    

    
}


int main()
{
    string str = "Saif Mahmud";
    string cpy_str;
    cpy_str = str;
    //cpy_str = cpy_str + " Parvez";
    reverse(cpy_str);
    cout<<"Original String: "<<str<<endl<<" Reverse String: "<<cpy_str;

}
