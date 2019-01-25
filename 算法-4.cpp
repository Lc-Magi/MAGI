//��ƪ�Ķ������ϣ����������ѧ��
#include <iostream>
#include <vector>
using namespace std;
int dp[100010][2];//dp��i����0��Ϊ��ѡ��i�ڵ�ʱ���Ȩֵ�ͣ�dp[i][1]Ϊѡ����ʱ��

vector<vector<int> > v;//ͼ�Ķ�̬����
void dfs(int now, int pre) {//ͼ����ȱ�����ǰ��
    for (int i = 0; i < v[now].size(); i++) {//nowΪ��ǰ�ڵ㣬preΪǰһ���㼴�Ǵ˱ߵĵ�һ����
        int next = v[now][i];//nextΪ��һ���㼴����һ�ߵ�ĩ��
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

