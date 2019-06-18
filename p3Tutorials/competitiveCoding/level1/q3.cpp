#include<iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	if(n>255||n<0){
		cout<<"Error! Input number between 0 to 255"<<cout;
		return 0;
	}
	int binary[8];
	int bit;
	memset(binary,0,sizeof(binary));
	int index=7;
	while(n>0){
		bit=n%2;
		binary[index]=bit;
		index--;
		n/=2;
	}
	cout<<"binary value is: ";
	for (int i = 0; i < 8; ++i)
	{
		cout<<binary[i]<<' ';
	}
	cout<<endl;
	return 0;
}