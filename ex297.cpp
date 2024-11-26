#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],max=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	int c[max+1]={0};
	for(int i=0;i<n;i++)
	{
		c[a[i]]++;
	}
	for(int i=0;i<=max;i++)
	{
		cout<<c[i]<<endl;
	}
	return 0;
}
