#include<iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int k;
	int b;
	int c;
	int d;
	int temp;
	int a[101];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>k;
		switch(k)
		{
			case 1:
				cin>>b>>c;
				temp=a[b];
				a[b]=a[c];
				a[c]=temp;
				for(int j=1;j<=n;j++)
				{
					cout<<a[j]<<" ";
				}
				cout<<endl;
				break;
			case 2:
				cin>>d;
				for(int j=d;j<n;j++)
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
