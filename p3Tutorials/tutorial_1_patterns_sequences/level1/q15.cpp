#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long int term=2;
	int n;
	cin>>n;
	if (n<1)
	{
		return 0;
	}
	for(int i = 1; i < n; ++i)
	{
		term=term*2;

	}
	cout<<term<<endl;
	return 0;
}