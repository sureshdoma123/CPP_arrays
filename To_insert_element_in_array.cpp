#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    int arr[n],p,e;
    cout<<"Enter the position to insert: ";
    cin>>p;
    cout<<"Enter element to insert : ";
    cin>>e;
    int ind=p-1;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    for(int j=n-1;j>=ind;j--)
    {
        arr[j+1]=arr[j];
        arr[j]=e;
    }
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
}