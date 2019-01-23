#include <iostream>
#include <iomanip>

using namespace std;

int maxk(int f,int r,int k,int a[] ){
	int b[r-f+1];
    for (int i=f-1;i<r;i++){
    	int max=0,p=0;
    	for (int j=f-1;j<r;j++)
    	if(max<a[j]) {
		max=a[j];p=j;}
		a[p]=0;
		b[i-f+1]=max;
	}
	return b[k-1];
}

int main(){
	int n,m;
	cin>>n;
	int a[n],b[n];
	for (int i=0;i<n;i++)  cin>>a[i];
	cin>>m;int f,r,k,mm[m];
	for(int i=0;i<m;i++){
		cin>>f>>r>>k;
		int aa[n];
		for(int j=0;j<n;j++)  aa[j]=a[j];
		mm[i]=maxk(f,r,k,aa);
	}	
	for(int i=0;i<m;i++)  cout<<mm[i]<<endl;
	return 0;
}


