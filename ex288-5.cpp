#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,min,a[100001],b,c,x,y;
 	cin>>n>>m;
 	for(int i=1;i<=n;i++){
 		cout<<i<<" ";
 		a[i]=i;
	 }cout<<endl;
 	for(int i=0;i<m;i++){
 		cin>>b;
 		if(b==1){
 			cin>>x>>y;
 			swap(a[x],a[y]);
 			for(int j=1;j<=n;j++){
		 		cout<<a[j]<<" ";
			 }cout<<endl;
		 }else if(b==2){
		 	cin>>c;
		 	a[c]=a[c+1];
		 	n=n-1;
		 	for(int j=c+1;j<=n;j++){
		 		swap(a[j],a[j+1]);
			 }
			 for(int j=1;j<=n;j++){
		 		cout<<a[j]<<" ";
			 }cout<<endl;
		 }
	 }
	return 0;
} 

