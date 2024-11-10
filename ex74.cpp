#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,a=0;
	cin>>r;
	a=r%10*100;
	a+=r%100/10*10;
	a+=r/100;
	cout<<a;
	return 0;
}
