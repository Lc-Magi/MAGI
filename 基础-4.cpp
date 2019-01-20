#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int a[10000];
	int n,max,min,s;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];	
	min=max=a[0];s=0;
	for(int i=0;i<n;i++){
	   if(a[i]<min)	 min=a[i];
	   if(a[i]>max)  max=a[i];
	   s+=a[i];
	}
	cout<<max<<endl<<min<<endl<<s<<endl;
	return 0;
}

