#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int valueToPrint=1,rows,freqToPrint=1,multiplier=-1;
	cin>>rows;
	for (int i = 1; i <= rows; ++i)
		{	
			if(i&1){
				multiplier=1;
			}
			for (int j = 1; j <= freqToPrint; ++j)
			{
				cout<<multiplier * valueToPrint<<' ';
				valueToPrint++;
				multiplier*=-1;
			}
			cout<<endl;
			freqToPrint++;
			multiplier=-1;
		}	
	return 0;
}