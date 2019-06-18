#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int i,j,k;
	int m,n;
	cin>>n>>m;
	int A[n],B[m],merge[n+m];
	for(i=0;i<n;++i)
	{
		cin>>A[i];
	}
	for(i=0;i<m;++i)
	{
		cin>>B[i];
	}
	i=0;
	j=0;
	k=0;
	while(i<n&&j<m){
		if(A[i]<B[j]){
			merge[k]=A[i];
			i++;
		}
		else{
			merge[k]=B[j];
			++j;
		}
		++k;
	}

	while(i<n){
		merge[k]=A[i];
		i++;
		k++;
	}

	while(j<m){
		merge[k]=B[j];
		++j;
		++k;
	}

	for(i=0;i<n;++i)
	{
		cout<<A[i]<<' ';
	}
	cout<<endl;
	for(i=0;i<m;++i)
	{
		cout<<B[i]<<' ';
	}
	cout<<endl;
	for(i=0;i<m+n;++i)
	{
		cout<<merge[i]<<' ';
	}

	cout<<endl;
	return 0;
}