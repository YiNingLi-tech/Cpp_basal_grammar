#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0,a=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a+=(i+1)*i/2;
	}
	cout<<a;
	return 0;
}
