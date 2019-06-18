#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char at1='A',at2='Z';
	for (int i = 1; i <= 14; i++)
	{
		at1='A'+((at1+2)-'A')%26;
		at2='A'+((at2-1)-'A')%26;
		cout<<at1<<at2<<" ";
	}
	//int c='Z'-'A';=25
	cout<<endl;
	return 0;
}