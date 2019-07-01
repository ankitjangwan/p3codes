#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> a,b;
	int n,m,k;
	cin>>n>>m;
	while(n--){
		cin>>k;
		a.push_back(k);
	}
	while(m--){
		cin>>k;
		b.push_back(k);
	}
	return 0;
}