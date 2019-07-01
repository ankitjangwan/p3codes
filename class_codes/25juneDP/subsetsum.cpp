#include<iostream>
#include<cstring>

using namespace std;

int set[1002];
int ispossible[1002][1002];
bool calculated[1002][1002];
int n;

int sum_possible(int i,int k){
    if(i>n||k<0)return 0;
    if(k==0)return 1;
    if(calculated[n][k]==false){
        ispossible[n][k]=(sum_possible(i+1,k-set[i])||sum_possible(i+1,k));
        calculated[n][k]=true;
    }
    return ispossible[n][k];
}

int main(){
    int k;
    int t,idx;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(idx=1;idx<=n;++idx){
            cin>>set[idx];
        }
        cout<<sum_possible(1,k)<<endl;
    }
    return 0;
}