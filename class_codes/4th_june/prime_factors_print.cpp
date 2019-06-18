#include<iostream>
#include <cmath>

using namespace std;

int main(){
	int n,i,countpower;
	cin>>n;
	int limit=n/2;
	for(i=2;i<=limit;++i){
		if(n%i==0){
			cout<<i<<' ';
			while(n%i==0){
				n/=i;
			}
	    }
	}
	
	return 0;
}
