#include<iostream>
using namespace std;
int main()
{
	int n;
	int m;
	cin>>n>>m;
	int a[101];
	int e[101];
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	int k[10];
	int b[10];
	int c[10];	
	int d[10];
	int temp;
	for(int i=0;i<m;i++)
	{
		cin>>k[i];
		switch(k[i])
		{
			case 1:
				cin>>b[i]>>c[i];
				break;
			case 2:
				cin>>d[i];
				break;
			default:
				break;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;	
	for(int i=0;i<m;i++)
	{
		switch(k[i])
		{
			case 1:
				temp = a[b[i]];
				a[b[i]]=a[c[i]];
				a[c[i]]=temp;
				for(int j=1;j<=n;j++)
				{
					cout<<a[j]<<" ";
				}
				cout<<endl;
				break;
			case 2:
				for(int j=d[i];j<n;j++)
				{
					a[j]=a[j+1];
				}
				for(int j=1;j<n;j++)
				{
					cout<<a[j]<<" ";
				}
				cout<<endl;
				break;
			default:
				break;
		}
	}	
	return 0;
}
