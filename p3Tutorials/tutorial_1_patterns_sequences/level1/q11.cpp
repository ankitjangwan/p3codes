#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double term,sum=0;
	int x,iteration;
	cin>>x;
	cin>>iteration;
	term=x;
//	cout<<term<<endl;
	for(int i=2;i<=iteration;++i){
		sum+=term;
		term=(term*x*x*-1)/((2*i-1)*(2*i-2));
//		 cout<<term<<endl;
	}
	cout<<sum<<endl;
	return 0;
}