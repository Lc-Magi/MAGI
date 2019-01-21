#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a[200],b[200];
	int n,min,m;
	cin>>n;
	for (int i=0;i<n;i++)  cin>>a[i];
	min=a[0];
	for (int i=0;i<n;i++){
	  for (int j=0;j<n;j++)
		if(min>a[j]) {min=a[j];m=j;}
	  b[i]=min;
	  a[m]=min=100000;
   }  
   for(int i=0;i<n;i++)
   cout<<b[i]<<" ";
   return 0;
}
