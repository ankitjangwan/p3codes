#include<iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,m,i,j;
	cin>>n>>m;
	int a[n],b[m];
	for (i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (i = 0; i < m; ++i)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	// for (i = 0; i < m; ++i)
	// {
	// 	cout<<b[i];
	// }
	i=j=0;

	while(i<n&&j<m){
		if(i==n-1||j==m-1){
			if(a[i]<b[j]){
				cout<<a[i]<<" ";
				i++;
			}
			else if (a[i]==b[j])
			{
				i++;
				j++;
			}
			else{
				j++;
			}
		}
		else{
			if(a[i]==a[i+1]){
				++i;
				continue;
			}

			if(b[j]==b[j+1]){
				++j;
				continue;
			}
			if(a[i]<b[j]){
				cout<<a[i]<<" ";
				i++;
			}
			else if (a[i]==b[j])
			{
				i++;
				j++;
			}
			else{
				j++;
			}	
		}
	}
	while(i<n){
		if(a[i]==a[i+1]){
				++i;
				continue;
		}
		cout<<a[i]<<" ";
		++i;
	}
	cout<<endl;
	return 0;
}