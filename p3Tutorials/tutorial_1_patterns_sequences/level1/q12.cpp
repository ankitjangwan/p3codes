#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned long int term1=2;
	unsigned long int term2=10;
	long int sum=0;
	int n;
	cin>>n;
	for (int i = 1; i <= 2*n; i+=2)
	{

		cout<<term1<<' '<<term2<<' ';
		sum=sum+term1+term2;
		term1=term1*3;
		term2=term2*2;
	}
	cout<<endl<<"Sum is: "<<sum<<endl;
	return 0;
}