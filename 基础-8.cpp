#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=1000;i<10000;++i)//È«²¿·¶Î§
    {
            int j=i;
            int a,b,c,d;
            a=j%10;
            b=j/10%10;
            c=j/100%10;
            d=j/1000;
            if(a==d&&b==c)
				cout<<i<<endl;
	}
    return 0;
}
