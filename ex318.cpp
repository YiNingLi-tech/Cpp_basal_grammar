#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],x,left=0,right=n-1,mid,b=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	while(left<=right)
	{
		b++;
		mid=(left+right)/2;
		if(x>a[mid])
		{
			left=mid+1;
		}
		else if(x<a[mid])
		{
			right=mid-1;
		}
		else
		{
			left=mid;
			break;
		}
	}
	cout<<left+1<<" "<<b;
	return 0;
}
