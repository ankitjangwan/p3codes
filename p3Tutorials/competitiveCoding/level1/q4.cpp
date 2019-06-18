#include<iostream>
#include <climits>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,max=INT_MIN;
	cin>>n;
	while(n>0){
		if(max<n)
			max=n;
		cout<<"max is : "<<max<<' '<<endl;
		cin>>n;
	}
	return 0;
}