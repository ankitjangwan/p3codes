#include<iostream>

using namespace std;

int is_safe(int n,int maze[][100],int x,int y){
	if((x>=0&&x<n)&&(y>=0&&y<n)&&(maze[x][y])){
		return 1;
	}
	return 0;
}

int is_solvable(int n,int maze[][100],int x,int y){
	if(x==n-1&&y==n-1&&maze[x][y]){
		return 1;
	}
	if(is_safe(n,maze,x+1,y)){
		return is_safe(n,maze,x+1,y);
	}
	if (is_safe(n,maze,x,y+1)){
		return is_safe(n,maze,x,y+1);
	}	
	return 0;
}

int main(){
	int n;
	cin>>n;
	int matrix[100][100];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>matrix[i][j];
		}
	}
	if(is_solvable(n,matrix,0,0)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}