#include<iostream>
#include<climits>

using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	getline(cin,str);
	int i=0,count=0,max=INT_MIN,idx_max=-1;
	while(str[i]!=0){
		count=0;
		if(str[i]>='0'&&str[i]<='9'){
			while(str[i]>='0'&&str[i]<='9'){
				++i;
				++count;
			}
			if(max<count){
				max=count;
				idx_max=i-max;
			}
		}
		else{
			++i;
		}
	}
	cout<<max<<endl;
	for(i=idx_max;i<idx_max+max;++i){
		cout<<str[i];
	}
	cout<<endl;
	return 0;
}