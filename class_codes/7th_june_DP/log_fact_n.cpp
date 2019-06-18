#include <iostream>
#include <cmath>

using namespace std;

float log_fact(int n){
	if (n==0)
		return 0;
	return log(n)+log_fact(n-1);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<log_fact(n);
	return 0;
}