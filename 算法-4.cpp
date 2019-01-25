//本篇改动自网上，相关内容已学会
#include <iostream>
#include <vector>
using namespace std;
int dp[100010][2];//dp【i】【0】为不选择i节点时最大权值和，dp[i][1]为选择它时的

vector<vector<int> > v;//图的动态矩阵
void dfs(int now, int pre) {//图的深度遍历（前序）
    for (int i = 0; i < v[now].size(); i++) {//now为当前节点，pre为前一个点即是此边的第一个点
        int next = v[now][i];//next为下一个点即是下一边的末点
        if (next != pre) {
            dfs(next, now);
            dp[now][0] += max(dp[next][0], dp[next][1]);
            dp[now][1] += dp[next][0];
        }
    }
}
int main() {
    int n, a, b;
    cin>>n;
    for (int i = 1; i <= n; i++)
        cin>>dp[i][1];
    v.resize(n + 1);
    for (int i = 1; i <= n - 1; i++) {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1, 0);
    cout << max(dp[1][0], dp[1][1]);
    return 0;
}

