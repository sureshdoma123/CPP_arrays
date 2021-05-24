/*
//using normal method
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,mc=0;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<" element : ";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=i;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
			if(c>mc)
			{
				mc=c;
				m=a[i];
			}
		}
	}
	cout<<"The customer "<<m<<" is reapted for "<<mc<<" times";	
}
*/
//using map method
#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,arr[n];
	cout<<"Enter the size of the arry: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//int *min=min_element(arr,arr+n);
	//int *max=max_element(arr,arr+n);
	map<int,int>dic;
	for(int i=0;i<n;i++)
	{
		dic[arr[i]]++;
	}
	int mc=0,id=0;
	for(auto it:dic)
	{
		if(mc<it.second)
		{
			mc=it.second;
			id=it.first;
		}
	}
	cout<<"custotm id is: "<<id<<endl;
	cout<<"max count is: "<<mc;

	
}
/*
//Using Frequency Method
#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,arr[n];
	cout<<"Enter size of the array: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//int *min=min_element(arr,arr+n);
	int *max=max_element(arr,arr+n);
	cout<<"Max element is: "<<*max<<endl;
	int res[*max+1]={0};
	for(int i=0;i<n;i++)
	{
		res[arr[i]]++;
	}
	for(int i=0;i<*max;i++)
	{
		cout<<res[i]<<" ";
	}
}
*/