#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,a=0;
	cin>>r;
	while(r!=0)
	{
		a=a*10+r%10;
		r/=10;
	}
	cout<<a;
	return 0;
}
