#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int A[1000];
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++) cin>>A[i];
	cin>>a;
	int flag=0,j;
	for(j=0;j<n;j++)
	{
		if(A[j]==a) {
		flag=1;break;
		}
	}
	if(flag==0) cout<<-1<<endl;
	else cout<<j+1<<endl;
	return 0;
}
