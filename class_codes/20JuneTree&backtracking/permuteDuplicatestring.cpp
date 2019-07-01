#include<iostream> 
#include<algorithm>

using namespace std;

void permute(string str,int l,int h){
	if (l==h)
	{
		cout<<str<<endl;
		return;
	}
	for(int i=l;i<h;++i){
		if(i==l||str[i]!=str[l]){
			swap(str[i],str[l]);
			permute(str,l+1,h);
			swap(str[i],str[l]);
		}
	}
	// return 0;
}

int main(){
	string str;
	getline(cin,str);
	permute(str,0,str.size());
	// cout<<x<<endl;
	return 0;
}