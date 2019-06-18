//incomplete code

#include<iostream>
#include<queue>

using namespace std;

class point
{
public:
	int x,y;
	
};

int main(){
	int n,m;
	cin>>n>>m;
	int matrix[n][m];
	int i,j;
	point p;
	queue<point> q;
	for (i=0;i<n;++i){
		for(j=0;j<m;++j){
			cin>>matrix[i][j];
		}
	}
	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
			if(matrix[i][j]==2){
				p.x=i;
				p.y=j;
				q.push(p);
			}
		}
	}
	p.x=-1;
	p.y=-1;
	q.push(p);
	while(!q.empty()){
		p=q.front();
		i=p.x;
		j=p.y;
		// cout<<i<<j<<' ';
		if(i==-1||j==-1){
			p.x=-1;
			p.y=-1;
			q.push(p);
			q.pop();
			break;
		}
		else if(matrix[i][j]==2)
		{
			if(i-1>=0){
				p.x=i-1;
				p.y=j;
				if(matrix[p.x][p.y]==1){
					q.push(p);
				}
			}
			else if(j-1>=0){
				p.x=i;
				p.y=j-1;
				if(matrix[p.x][p.y]==1){
					q.push(p);
				}
			}	
			else if(j+1<m){
				p.x=i;
				p.y=j+1;
				if(matrix[p.x][p.y]==1){
					q.push(p);
				}
			}
			else if(i+1<n){
				p.x=i+1;
				p.y=j;
				if(matrix[p.x][p.y]==1){
					q.push(p);
				}
			}
		}
		q.pop();
	}
	cout<<endl;
	return 0;
}
