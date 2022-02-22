#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void PrtSubSeq(int idx,vector<int>&ds,int arr[],int n)
{
    if(idx==n)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
    if(ds.size()==0)
    {
        cout<<"{}";
    }
        cout<<endl;
        return;
    }

    //pick
    ds.push_back(arr[idx]);
    PrtSubSeq(idx+1,ds,arr,n);
    ds.pop_back();
    //not pick
    PrtSubSeq(idx+1,ds,arr,n);

}
int main() 
{
    int arr[]={3,1,2};
    int n=3;
    vector<int>ds;
    PrtSubSeq(0,ds,arr,n);
    return 0;
}
