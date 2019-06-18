/*In number theory, two integers a and b are said to be relatively prime,
mutually prime,
or coprime (also written co-prime)
if the only positive integer (factor) that divides both of them is 1.
Consequently, any prime number that divides one 
does not divide the other. 
This is equivalent to their greatest common divisor (gcd) being 1.*/

#include<iostream>

using namespace std;

int cal_gcd(int,int);

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	if (cal_gcd(a,b)==1)
	{
		cout<<"Numbers are co prime"<<endl;
		return 0;
	}

	cout<<"Numbers are not co prime"<<endl;
	return 0;
}

int cal_gcd(int a,int b){
	if(b==0){
		return a;
	}
	return cal_gcd(b,a%b);
} 