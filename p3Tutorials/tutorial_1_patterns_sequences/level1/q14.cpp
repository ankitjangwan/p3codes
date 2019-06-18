#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	double term=1;
	int x;
	cin>>x;
	for (int i = 1; i < 100; ++i)
	{
		term=(term*x)/i;

	}
	cout<<term<<endl;
	return 0;
}