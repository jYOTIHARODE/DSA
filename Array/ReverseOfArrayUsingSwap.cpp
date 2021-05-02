#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr,int n)
{
    int start = 0;
    int end = n-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)    cin>>arr[i];
    reverse(arr,n);
    for(int i=0 ; i<n ; i++)    cout<<arr[i]<<" ";
    return 0;
}