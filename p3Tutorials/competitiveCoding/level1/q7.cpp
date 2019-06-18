/*A twin prime is a prime number that is either 2 less or 2 more
 than another prime number—for example,
  either member of the twin prime pair (41, 43).
   In other words, a twin prime is a prime that
    has a prime gap of two. Sometimes the term twin
     prime is used for a pair of twin primes;
      an alternative name for this is prime twin or prime pair. */

#include<iostream>
#include <cmath>

using namespace std;

int check_prime(int);

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	if(a-b>2||b-a>2){
		cout<<"not twin prime"<<endl;
		return 0;
	}
	if(check_prime(a)&&check_prime(b))
		cout<<" Twin prime"<<endl;
	else
		cout<<"not twin prime"<<endl;
	return 0;
}

int check_prime(int n)
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