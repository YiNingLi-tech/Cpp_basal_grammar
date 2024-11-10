#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int c=1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int b=1;
		if(a[i]==a[i+1])
		{
			b++;
			int j;
			for(j=i+2;a[i]==a[j];j++)
			{
				b++;
			}
			i=j-1;
		}
		c=b>c?b:c;
	}
	cout<<c;
	return 0;
}
