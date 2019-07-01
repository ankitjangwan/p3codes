#include<iostream>
#include<algorithm>

using namespace std;

void permute(string str,int low,int high){
	static int count=0;
	if(low==high){
		count++;
		cout<<str<<endl;
		return;
	}
	for(int i=low;i<high;++i){
		swap(str[i],str[low]);
		permute(str,low+1,high);
		swap(str[i],str[low]);
	}
	// cout<<count<<endl;
}

int main(){
	string str;
	getline(cin,str);
	permute(str,0,str.size());	
	return 0;
}