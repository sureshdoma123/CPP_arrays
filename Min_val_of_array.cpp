#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n];
	cout<<"Enter the size of the array: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<" element: ";
		cin>>arr[i];
	}
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"Mnimum Value of the array is: "<<min;
}
