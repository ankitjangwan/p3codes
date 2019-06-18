#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int rows,freqToPrint=1;
	cin>>rows;
	int nspace=rows-1;
	for (int i = 1; i <= rows; ++i)
	{
		for (int j = 1; j <= nspace; ++j)
		{
			cout<<' ';
		}
		for (int j = 1; j <= freqToPrint; ++j)
		{
			cout<<'*';
		}
		cout<<endl;
		freqToPrint+=2;
		nspace--;
	}
	
	nspace=1;
	freqToPrint=2*(rows-1)-1;
	for (int i = 1; i < rows; ++i)
	{
		for (int j = 1; j <= nspace; ++j)
		{
			cout<<' ';
		}
		for (int j = 1; j <= freqToPrint; ++j)
		{
			cout<<'*';
		}
		cout<<endl;
		freqToPrint-=2;
		nspace++;
	}
	return 0;
}