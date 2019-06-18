/*A semiprime, also called a 2-almost prime, 
biprime, or pq-number, is a composite number 
that is the product of two (possibly equal) primes.
The first few are 4, 6, 9, 10, 14, 15, 21, 22,*/


#include<iostream>
#include<cmath>

using namespace std;

int isprime(int);

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int limit=sqrt(n);
	for (int i = 2; i <= limit; ++i)
	{
		if (n%i==0)
		{
			if(isprime(i)&&isprime(n/i)){
				cout<<"coprime number"<<endl;
				return 0;
			}

		}
	}
	cout<<"Not a coprime number"<<endl;
	return 0;
}

int isprime(int n)
{
	int i;
	int limit=sqrt(n);
	if(n==1){
		return 0;
	}
	for (i = 2; i <= limit; ++i)
	{
		if (n%i==0)
		{
			return 0;
		}
	}
	return 1;
}