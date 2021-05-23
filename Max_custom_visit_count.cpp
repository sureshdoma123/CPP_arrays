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
