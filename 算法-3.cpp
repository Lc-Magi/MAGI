#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;
 
int f[101][101];
 
int main() {
    int l, k;cin>>k>>l;
	memset(f,0,sizeof(f));
    if(l == 1){cout<<k-1<<endl;  return 0;}
    for(int j = 0; j < k; j++)  f[1][j] = 1;
    for(int i = 2; i < l; i++) {
        for(int j = 0; j < k; j++) {
            int n = 0;
            for(int r = 0; r < k; r++) {
                if(r == j + 1 ||r == j - 1)continue;
                n = (n + f[i-1][r]) % 1000000007;
            }
            f[i][j] = n;
        }
    }
    int m = 0;
    for(int j = 1; j < k; j++) {
        int n = 0;
        for(int r = 0; r < k; r++) {
            if(r == j + 1 ||r == j - 1)continue;
            n = (n + f[l-1][r]) % 1000000007;
        }
        m = (m + n)%1000000007;
    }
    cout<< m <<endl;
    return 0;
}
