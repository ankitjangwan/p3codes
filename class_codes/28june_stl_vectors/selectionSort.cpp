#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> a;
	int n;
	cin>>n;
	int k;
	while(n--){
		cin>>k;
		a.push_back(k);
	}
	for(auto i=a.begin();i!=a.end();++i){
		auto k=min_element(i,a.end());
		if(*i!=*k){
			swap(*i,*k);
		}

	}
	for(auto i=a.begin();i!=a.end();++i){
		cout<<*i<<' ';
	}
	cout<<endl;
}