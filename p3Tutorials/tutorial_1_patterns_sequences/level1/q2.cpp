#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int valueToPrint=1,rows,freqToPrint=1;
	cin>>rows;
	for (int i = 1; i <= rows; ++i)
		{
			for (int j = 1; j <= freqToPrint; ++j)
			{
				cout<<valueToPrint<<' ';
				valueToPrint++;
			}
			cout<<endl;
			freqToPrint++;
		}	
	return 0;
}