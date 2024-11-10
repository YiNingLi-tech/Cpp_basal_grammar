#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	int b=1;
	if(n==1)
	{
		cout<<"No";
		return 0;
	}
	for(int i=3;i<=n;i+=2)
	{
		bool a=true;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				a=false;
				break;
			}
		}
		if(a)
		{
			b++;
		}		
	}

	return 0;
}
