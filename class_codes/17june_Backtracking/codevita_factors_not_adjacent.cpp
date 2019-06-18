#include <iostream>

using namespace std;

int generatecombination(string str,int present,int end){
	static int count =0;
	if(present==end){
		cout<<str<<endl;	
		str[end]=0;
		count++;
	}
	else{
		int i;
		for(i=1;i<=end;++i){
			if(str[present]-str[present-1]!=1&&str[present]!=str[present-1])
			{	
				str[present]=i+'0';
				generatecombination(str,present+1,end);
			}
		}
	}
	return count;
}

int main(){
	long int n;
	cin>>n;
	int i,count=0;
	for(i=1;i<=n;++i){
		if(n%i==0){
			// cout<<i<<' ';
			count++;
		}
	}
	char str[count+1];
	// cout<<endl;
	// cout<<count<<endl;
	int combination=0;
	for(i=1;i<=count;++i){
		str[0]='0'+i;
		// cout<<combination<<endl;
		combination+=generatecombination(str,1,count);
	}
	cout<<combination<<endl;
	return 0;

}