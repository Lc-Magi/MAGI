#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
	int a[34][34];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)  {
	a[i][0]=1;a[i][i]=1;}
	cout<<1<<endl<<1<<" "<<1<<endl;
	for(int i=2;i<n;i++){
	   for(int j=1;j<i;j++)
	   a[i][j]=a[i-1][j]+a[i-1][j-1];
	   for(int k=0;k<i+1;k++)
	   cout<<a[i][k]<<" ";
	   cout<<endl;	
	}
	return 0;
}
