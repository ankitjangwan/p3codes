#include <iostream>
#include <string>
#include<cstring>
#include <algorithm>

using namespace std;

string rotate(string a,int d){
	reverse(a.begin(),a.begin()+d);
	reverse(a.begin()+d,a.end());
	reverse(a.begin(),a.end());
	return a;
}

int isanagram(string a,string b){
	int freqa[26],freqb[26],i;
	int sizea=a.size();
	int sizeb=b.size();
	// cout<<a<<','<<b<<endl;
	if(sizea!=sizeb){
		return 0;
	}
	for(i=0;i<sizea;++i){
		a[i]=tolower(a[i]);
		b[i]=tolower(b[i]);
	}
	memset(freqa,0,sizeof(freqa));
	memset(freqb,0,sizeof(freqb));
	for(i=0;i<sizea;++i){
		freqa[a[i]-'a']++;
		freqb[b[i]-'a']++;
	}
	for(i=0;i<26;++i){
		if(freqa[i]!=freqb[i]){
			// cout<<i<<" freq not equal ";
			//cout<<"\n"<<freqa[i]<<' '<<freqb[i];
			return 0;
		}
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	string input,firstChar="",tmp;
	int n,t,len,lenFirstChar,i;
	char d;
	getline(cin,input);
	len=input.size();
	string ipcopy=input;
	// cout<<input<<endl;
	cin>>t;
	while(t--){
		cin>>ws;
		cin>>d;
		cin>>n;
		if(d=='L'){
			input=rotate(input,n%len);
			firstChar=firstChar+input[0];
			// cout<<input<<' ';
		}
		else if(d=='R'){
			input=rotate(input,len-(n%len));
			firstChar=firstChar+input[0];
			// cout<<input<<' ';
		}
	}
	// cout<<input<<endl<<ipcopy<<endl;
	lenFirstChar=firstChar.size();
	for(i=0;i+lenFirstChar<=len;++i){
		tmp=ipcopy.substr(i,lenFirstChar);
		if(isanagram(tmp,firstChar)){
			// cout<<firstChar<<endl;
			cout<<"YES";
			return 0;
		}
	}
	// cout<<firstChar<<endl;
	cout<<"NO";
	return 0;
}