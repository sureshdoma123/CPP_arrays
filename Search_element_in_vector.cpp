//To search an element in Vector...
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,val;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);
    }
    //Method 1(by value)
    /*int x;
    cout<<"Enter the element to find in vector: ";
    cin>>x;
    vector<int>::iterator it;
    it=find(v.begin(),v.end(),x);
    if(*it==x)
    {
        cout<<x<<" is Found";
    }
    else
    {
        cout<<x<<" is not found ";
    }*/
    
    //Method 2(by index)
    int x;
    cout<<"Enter x value : ";
    cin>>x;
    vector<int>::iterator it;
    it=find(v.begin(),v.end(),x);
    if(it!=v.end())
    {
        cout<<it-v.begin();
    }
    else
    {
        cout<<-1;
    }



}
