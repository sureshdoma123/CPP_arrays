//To delete an element in a array(or)Vector
#include<bits/stdc++.h>
using namespace std;
main()
{
    int val,de,n,c=0,l,res;
    cout<<"Enter size of vector : ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        v.emplace_back(val);
    }
    cout<<"Enter element to be delete : ";
    cin>>de;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==de)
        {
            c=i;
            res=1;
            break;
        }
    }
    if(res==1)
    {
        cout<<v[c]<<" Element is Found."<<endl;
        cout<<v[c]<<" Element is deleted Succesfully..."<<endl;
        swap(v[c],v[n-1]);
        v.pop_back();
    }
    else
    {
        cout<<"Element is Not Found.";
    }
}