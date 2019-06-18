#include<iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,i;
	cin>>n;
	int limit=sqrt(n);
	if(n==1){
		cout<<"Not Prime"<<endl;
		return 0;
	}
	for (i = 2; i <= limit; ++i)
	{
		if (n%i==0)
		{
			cout<<"Not Prime"<<endl;
			return 0;
		}
	}

	cout<<"prime"<<endl;
	return 0;
}