#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int i;
	for (i = 1; i*i*i <= n; ++i);
	cout<<i-1;
	return 0;
}