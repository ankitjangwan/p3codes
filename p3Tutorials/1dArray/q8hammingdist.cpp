#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int res=a^b;
	int count=0;
	//brian kernighon algo
	while(res!=0){
		res=res&(res-1);
		count++;
	}
	cout<<count<<endl;
	return 0;
}