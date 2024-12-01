#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A,C=0;
	cin>>A;
	for(int i=1;i*i<=A;i++)
	{
		if (A%i==0)
		{
			C++;
		}
	}
	cout<<C;
	return 0;
}
