#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
	int a,b,c;
	for(int i=100;i<1000;i++)
	{
	   a=i%10;
	   b=i/10%10;
	   c=i/100;
	   if ((a*a*a+b*b*b+c*c*c)==i)	
	   cout<<i<<endl;
	}
	return 0;
}
