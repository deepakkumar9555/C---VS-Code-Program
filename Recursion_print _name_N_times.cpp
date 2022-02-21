#include<iostream>
using namespace std;
//Program to print  a name N time using recursion
void printname(string str,int n)
{
    if(n==0)
    {
        return;
    }
    cout<<str<<endl;
    printname(str,n-1);
}
int main()
{
    printname("Deepak",5);
    return 0;
}