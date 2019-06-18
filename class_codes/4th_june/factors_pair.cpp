#include<iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,i;
	cin>>n;
	int limit=sqrt(n);
	cout<<limit<<endl;
	for (i = 1; i <= limit; ++i)
	{
		if (n%i==0)
		{
			cout<<'('<<i<<','<<n/i<<')'<<endl;
		}
	}
	return 0;
}