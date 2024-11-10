#include<iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int b;
	int c;
	int d;
	int temp;
	int k[10];
	int a[101];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(int i=0;i<m;i++)
	{
		cin>>k[i];
		switch(k[i])
		{
			case 1:
				cin>>b>>c;
				break;
			case 2:
				cin>>d;
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
				temp=a[b];
				a[b]=a[c];
				a[c]=temp;
				for(int k=1;k<=n;k++)
				{
					cout<<a[k]<<" ";
				}
				cout<<endl;
				break;
			case 2:
				for(int j=d;j<n;j++)
				{
					a[j]=a[j+1];
				}
				for(int k=1;k<n;k++)
				{
					cout<<a[k]<<" ";
				}
				cout<<endl;
				break;
			default:
				break;
		}
	}
	return 0;
}
