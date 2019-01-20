#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<i && k<m;k++)
		cout<<(char)('A'+i-k);
		for(int j=0;j<m-i;j++)
		cout<<(char)('A'+j);
		cout<<endl;
	}
	return 0;
}
