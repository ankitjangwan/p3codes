#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long int term=2,sum=2;
	int n;
	cin>>n;
	if (n<1)
	{
		cout<<"sum is 0"<<endl;
		return 0;
	}
	for(int i = 1; i < n; ++i)
	{
		term=term*2;
		sum+=term;
		// cout<<term<<' ';
	}
	cout<<term<<' '<<sum<<endl;
	return 0;
}