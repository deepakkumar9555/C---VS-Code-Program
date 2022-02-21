#include <bits/stdc++.h>
using namespace std;
bool reverse(string &a,int i)
{
  if(i>=a.size()/2)//base case
  {
     return true;  
  } 
  if(a[i]!=a[a.size()-i-1])
  {
    return false;
  }
    return reverse(a,i+1);
  
 // else
  //{
   // swap(a[i],a[n-i-1]);
    //reverse(a,n,i+1);
  //}
}
int main()
{
  
  string a="MADSM";
  cout<<reverse(a,0);  
//   for(int i=0;i<n;i++)
//   {
//     cout<<a[i]<<" ";
//   }
//   cout<<endl;
}