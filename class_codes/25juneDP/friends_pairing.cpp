#include<iostream>

using namespace std;

int n;
int way[100];
bool calculated[100];

int p(int n){
	if(n==0||n==1){
		return 1;
	}
	if(n<0){
		return 0;
	}	
	if(calculated[n]==false){
		way[n]=p(n-1)+(n-1)*p(n-2);
		calculated[n]=true;
	}
	return way[n];
}

int main(){
	cin>>n;
	cout<<p(n)<<endl;
	return 0;
}