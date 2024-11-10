#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[10000];
	int x;
	int b[10001];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	cin>>x;
	int j=0;
	while(x>a[j])
	{
		j++;
	}
	b[j]=x;
	for(int i=j+1;i<=n;i++)
	{
		b[i]=a[i-1];
	}
	for(int i=0;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
