#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b=0;
	cin>>n;
	int s=n;
	int a[n+1];
	for(int i=0;i<=n;i++)
	{
		a[i]=1;
	}
	while(1)
	{
		b=s>=3?0:s;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==1)
			{
				b++;
				if(b%3==0)
				{
					a[i]=0;
					s--;
					if(s==1)
					{
						cout<<i;
						return 0;
					}
				}
			}
		}
		b=s>=3?0:s;
		for(int j=n;j>0;j--)
		{
			if(a[j]==1)
			{
				b++;
				if(b%3==0)
				{
					a[j]=0;
					s--;
					if(s==1)
					{
						cout<<j;
						return 0;
					}
				}
			}
		}
	}
}
