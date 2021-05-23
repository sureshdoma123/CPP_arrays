#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n];
	cout<<"Enter the size of the array :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<" element: ";
		cin>>arr[i];
	}
	int min=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<"Max of the array is : "<<max;
}
