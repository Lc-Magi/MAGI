#include <iostream>
#include<algorithm>
//#include<cstring>
using namespace std;

int n,p; 
int node[10001]; // ����Ȩֵ 
int f[10001]; // �ж���ͨ�� 
 
struct E{
	int x,y,d; //x��y������� 
}e[10001];
 
bool cmp(E e1, E e2){
	return e1.d < e2.d;
}
 
int find(int x){//Ѱ����ͨ�����һ���ڵ�
	return f[x] == x ? x : f[x] = find(f[x]);
}
 
int Kruscal(){
	int ans = 0;
	sort(e,e+p,cmp);//�������� new to learn!
	for(int i = 0; i < p; i++){
		int xx = find(e[i].x);//x��ͨ�����һ���ڵ�
		int yy = find(e[i].y);//y��ͨ�����һ���ڵ�
		if(xx != yy){
			f[xx] = yy; // ��������ͨ 
			ans += e[i].d;  
		}
	}
	return ans;
}
 
void init(){
	for(int i = 0; i < n; i++){
		cin>>node[i];
	}
	for(int i = 0; i < p; i++){
		cin>>e[i].x>>e[i].y>>e[i].d;
		e[i].d = e[i].d * 2 + (node[e[i].x-1] + node[e[i].y-1]);
	}
	for(int i = 0; i < n; i++){
		f[i] = i;
	}
}
 
int main(){
	cin >> n >> p;
	init();
	int min = 100000;
	for(int i = 0; i < n; i++){
		if(node[i] < min) min = node[i];
	}
	cout<<min+Kruscal();
	
	return 0;
}

