#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[10];
	int b;
	int n=0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];		
	}
	cin>>b;
	b+=30;
	for(int i=0;i<10;i++)
	{
		if(a[i]<=b)
		{
			n++;
		}
	}
	printf("%d",n);
	return 0;
	
}
