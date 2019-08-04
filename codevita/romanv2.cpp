#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string dec2rom(int n){
  one = d[n%10];
  n=n/10;
  ten=c[n%10];
  n=n/10;
  hundred=b[n%10];
  n=n/10;
  thousand=a[n%10];
  n=n/10;
  string result=thousand+hundred+ten+one;
  return result;
}

int rom2dec(string roman){
  string temp=roman;
  int num=0;
  int n=temp.size();
  sort(temp.begin(),temp.end());
  int base=10+(temp[n-1]-'A');
  base++;
  int power=1;
  for(int i=n-1;i>=0;--i){
    int digit=10+roman[i]-'A';
    num=num+(power*(digit));
    power*=base;
  }
  return num;

}

int main(){
  int n;
  string a[]={"","M","MM","MMM"};
  string b[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
  string c[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
  string d[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
  string one,ten,hundred,thousand;
  string roman;
  cin>>n;
  while(1){
    one = d[n%10];
    n=n/10;
    ten=c[n%10];
    n=n/10;
    hundred=b[n%10];
    n=n/10;
    thousand=a[n%10];
    n=n/10;
    roman=thousand+hundred+ten+one;

    string temp=roman;
    int num=0;
    int n=temp.size();
    sort(temp.begin(),temp.end());
    int base=10+(temp[n-1]-'A');
    base++;
    int power=1;
    for(int i=n-1;i>=0;--i){
      int digit=10+roman[i]-'A';
      num=num+(power*(digit));
      power*=base;
    }

    if(n>3999){
      cout<<n;
      break;
    }
  }
  return 0;
}
