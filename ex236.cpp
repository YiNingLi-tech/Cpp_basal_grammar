#include<iostream>
using namespace std;
int main()
{
	int n;
	double b=0;
	cin>>n;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a>70)
		{
			if(a>a/70*70)
			{
				b+=a/70+1;
			}
			else
			{
				b+=a/70;
			}
		}
		else
		{
			b++;
		}
	}
//	cout<<b*0.1;
	printf("%.1f",b*0.1);
	return 0;
}

