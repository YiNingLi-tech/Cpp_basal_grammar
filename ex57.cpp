#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a;
	int b;
	cin>>a>>b;
	printf("%*.3f\n",b,a);
	printf("%0*.3f\n",b,a);
	printf("%-*.3f\n",b,a);
	return 0;
}
