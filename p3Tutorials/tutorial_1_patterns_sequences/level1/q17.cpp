#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long int term1,term2,term3,sum=0;
	int n;
	cin>>n;
	cin>>term1>>term2>>term3;
	if (term2-term1!=term3-term2)
	{
		cout<<"input is not an AP"<<endl;
		return 0;
	}
	if(n<1){
		cout<<"number of terms invalid"<<endl;
		return 0;
	}
	int common_diff=term2-term1;
	// cout<<common_diff<<endl;
	for(int i = 0; i < n; ++i)
	{
		cout<<term1<<' ';
		sum+=term1;
		term1+=common_diff;

	}
	cout<<endl<<"sum of AP is: "<<sum<<endl;
	return 0;
}