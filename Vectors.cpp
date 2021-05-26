#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    long long int val;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int>ve;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        ve.push_back(val);
    }
    //ve.push_back(10);//To add Elements to the vector
    //ve.push_back(20);
    //ve.emplace_back(30);
    //ve.pop_back();//To remove the last element of the vector
    //ve.push_back(30);
    vector<int>arr(3,100);//To create a number for n times in a Vector {100,100,100}
    vector<int>arr2(5);//To create a vector with zero's of a size n {0,0,0,0,0}
    vector<int>ve1(arr);//Copying one vector to another Vector
    vector<int>::iterator it;//Using Iterator to print the elements in the array
    for(it=ve.begin();it!=ve.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    int x;
    cin>>x;
    it=find(ve.begin(),ve.end(),x);//To find a value present in vector or not
    if(*it==x)
        cout<<x<<" Found";
    else
        cout<<x<<" Not found";

}