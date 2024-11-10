#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	int a=1;
	cin>>n;
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	for(int i=3;i<=n;i+=2)
	{
		bool b=true;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				b=false;
				break;
			}
		}
		if(b)
		{
			a++;
		}
	}
	cout<<a;
	return 0;
}
