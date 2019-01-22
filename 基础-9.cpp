#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=10000;i<=999999;++i)//È«²¿·¶Î§
    {
        if(i<100000)
        {
            int j=i;
            int a,b,c,d,e;
            a=j%10;
            b=j/10%10;
            d=j/1000%10;
            c=j/100%10;
            e=j/10000;
            if(a==e&&b==d&&a+b+c+d+e==n)
                cout<<i<<endl;
        }
        else
        {
            int j=i;
            int a,b,c,d,e,f;
            a=j%10;
            b=j/10%10;
            c=j/100%10;
            d=j/1000%10;
            e=j/10000%10;
            f=j/100000;
            if(a==f&&b==e&&c==d&&a+b+c+d+e+f==n)
                cout<<i<<endl;
        }
    }
    return 0;
}
