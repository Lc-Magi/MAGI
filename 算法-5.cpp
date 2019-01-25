#include <iostream>
#include <string.h>

using namespace std;
/*
Floyd算法: 
int main(){
	int n,m,u,v,l;
	cin>>n>>m;
	int a[n][n];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	a[i][j]=0x3fffffff;
	for(int i=0;i<m;i++){
		cin>>u>>v>>l;
		a[u-1][v-1]=l;
	}
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	for(int k=0;k<n;k++)
	if(a[i][j]>a[i][k]+a[k][j])
	    a[i][j]=a[i][k]+a[k][j];
	for (int i=1;i<n;i++)
     	cout<<a[0][i]<<endl;   
	return 0;	
}
*///Floyd算法时间和内存会超

int dis[20005],u[200005],v[200005],w[200005];//dis[i]代表第一点到第i点距离
//u[i]，v[i],w[i]分别代表第i条边的起始点，终点和长度。
int main()
{
		int m,n;
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			cin>>u[i]>>v[i]>>w[i];
		}
		memset(dis,10001,sizeof(dis));
		dis[1]=0;
		for(int k=1;k<n;k++)
		{
			for(int i=1;i<=m;i++)
			{
				if(dis[v[i]]>dis[u[i]]+w[i])                            
				dis[v[i]]=dis[u[i]]+w[i];
			}
		}
		for(int i=2;i<=n;i++)
		cout<<dis[i]<<endl;
	return 0;
}
//最终只有70分，有三个依旧超时
