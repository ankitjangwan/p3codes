#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int starsToPrint=1,rows;
	cin>>rows;
	for (int i = 1; i <= rows; ++i)
		{
			for (int j = 1; j <= starsToPrint; ++j)
			{
				cout<<'*';
			}
			cout<<endl;
			starsToPrint++;
		}	
	return 0;
}