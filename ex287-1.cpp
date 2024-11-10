#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[10000];
	int b[10001];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x;
	cin>>x;
	int j=0;
	while(x>a[j])
	{
		j++;
	}
	for(int i=0;i<=n;i++)
	{
		if(i<j)
		{
			b[i]=a[i];
		}
		else if(i==j)
		{
			b[i]=x;
		}
		else
		{
			b[i]=a[i-1];
		}		
	}
	for(int i=0;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
