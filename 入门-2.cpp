#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long long int n;
    long long int S=0;
	cin>>n;
   	if(n%2==0)
   	S=(n/2)*(n+1);
   	else S=((n+1)/2)*n;
	cout<<S;
	return 0;
}
