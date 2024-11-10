#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,NA,NB;
	cin>>N>>NA>>NB;
	int a[100],b[100],c=0,d=0;
	for(int i=0;i<NA;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<NB;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<N;i++)
	{
		if(b[i%NB]==5)
		{
			if(a[i%NA]==0)
			{
				d++;
			}
			if(a[i%NA]==2)
			{
				c++;
			}
		}
		if(b[i%NB]==2)
		{
			if(a[i%NA]==0)
			{
				c++;
			}
			if(a[i%NA]==5)
			{
				d++;
			}
		}
		if(b[i%NB]==0)
		{
			if(a[i%NA]==5)
			{
				c++;
			}
			if(a[i%NA]==2)
			{
				d++;
			}
		}
	}
	if(c>d)
	{
		cout<<"A";
	}
	else if(c<d)
	{
		cout<<"B";
	}
	else
	{
		cout<<"draw";
	}
	return 0;
}
