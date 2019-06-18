#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int valueToPrint=1,rows,freqToPrint=1,maxval;
	cin>>rows;
	for (int i = 1; i <= rows; ++i)
		{	maxval=valueToPrint+freqToPrint-1;
			for (int j = 1; j <= freqToPrint; ++j)
			{
				cout<<maxval<<' ';
				valueToPrint++;
				maxval--;
			}
			cout<<endl;
			freqToPrint++;
		}	
	return 0;
}