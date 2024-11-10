#include<iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int k;
	int a[101];
	int e[101];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		for(int i=1;i<=n;i++)
		{
			e[i]=i;
		}
		cin>>k;
		switch(k)
		{
			case 1:
				int b;
				int c;
				cin>>b>>c;
				e[b]=a[c];
				e[c]=a[b];
				for(int k=1;k<=n;k++)
				{
					cout<<e[k]<<" ";
				}
				cout<<endl;
				break;
			case 2:
				int d;
				cin>>d;
				for(int j=d;j<n;j++)
				{
					e[j]=a[j+1];
				}
				for(int k=1;k<n;k++)
				{
					cout<<e[k]<<" ";
				}
				cout<<endl;
				break;
			default:
				break;
		}
	}
	return 0;
}
