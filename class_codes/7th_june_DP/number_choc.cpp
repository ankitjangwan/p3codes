//incomplete
#include<iostream>

using namespace std;

int find_num_choc(int ,int ,int);

int main(int argc, char const *argv[])
{
	int money,price,wrap;
	cin>>money;
	cin>>price;
	cin>>wrap;
	int num=find_num_choc(money,price,wrap);
	cout<<"total choclates: "<<num<<endl;
	return 0;
}

int find_num_choc(int money,int price,int wrap){
	if (money<price)
	{
		return 0;
	}

	return (money/price + (money/price)/wrap + find_num_choc(money/wrap,price,wrap));
}