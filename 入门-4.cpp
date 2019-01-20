#include <iostream>
#include <vector>
using namespace std;

int main (){
	vector<int> a;
	a.push_back(1);
	a.push_back(1);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	a.push_back(a[i]+a[i+1]);
	a[i+2]%=10007;
	}
	cout<<a[n-1];
	return 0;
}
