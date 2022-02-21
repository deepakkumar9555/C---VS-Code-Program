#include <bits/stdc++.h>
using namespace std;
void reverse(int a[],int n,int i)
{
  if(i>n/2)//base case
  {
     return;
  }  
 // else
  //{
    swap(a[i],a[n-i-1]);
    reverse(a,n,i+1);
  //}
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  reverse(a,n,0);  
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}