#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,i,j,k;
	cin>>n>>m;
	int a[n],b[m],c[n+m];
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	for(i=0;i<m;++i){
		cin>>b[i];
	}
	i=0;
	j=0;
	k=0;
	while(i<n&&j<m){
		if(i!=n-1&&a[i]==a[i+1]){
			++i;
			continue;
		}
		if(j!=m-1&&b[j]==b[j+1]){
			++j;
			continue;
		}
		if(a[i]==b[j]){
			c[k]=a[j];
			++k;
			++j;
			++i;
		}
		else {
			c[k]=a[i];
			c[k+1]=b[j];
			k+=2;
			++i;
			++j;
		}
		for(i=0;i<k;++i){
			cout<<c[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}