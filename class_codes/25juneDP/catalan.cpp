#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int c[n+1];
	int i,j,temp;
	c[0]=1;
	c[1]=1;
	for(i=2;i<=n;++i){
		temp=0;
		for(j=0;j<i;++j){
			temp+=c[j]*c[i-j-1];
		}
		c[i]=temp;
	}
	cout<<c[n]<<endl;

	return 0;
}