#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n,i,countpower;
	cin>>n;
	int limit=n/2;
	for(i=2;i<=limit;++i){
		countpower=0;
		while(n%i==0){
			countpower++;
			n/=i;
		}
		if (countpower)
			cout<<i<<"^"<<countpower<<endl;
	}
	return 0;
}