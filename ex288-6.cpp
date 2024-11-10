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
//	int temp;
	int a[10001];
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
		if(k==1)
		{
			cin>>b>>c;
//			temp=a[b];
//			a[b]=a[c];
//			a[c]=temp;
			swap(a[b],a[c]);
			for(int j=1;j<=n;j++)
			{
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
		else if(k==2)
		{
			cin>>d;
			a[d]=a[d+1];
			n--;
			for(int j=d+1;j<=n;j++)
			{
				swap(a[j],a[j+1]);
			}
//			for(int j=d+1;j<n;j++)
//			{
//				a[j]=a[j+1];
//			}
			for(int j=1;j<=n;j++)
			{
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
