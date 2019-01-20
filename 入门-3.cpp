#include <iostream>
#include <iomanip>

#define PI 3.14159265358979323

using namespace std;

int main(){
   int r;
   cin>>r;
   double s;
   cout.setf(ios::fixed);
   cout<<setprecision(7)<<PI*r*r<<endl;	
   return 0;
}
