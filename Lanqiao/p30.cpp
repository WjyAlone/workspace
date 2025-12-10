#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 6010;
vector<int> tree[MAXN];
int happy[MAXN];      // 每个员工的快乐指数
int dp[MAXN][2];      // dp[u][0/1]
bool has_father[MAXN]; // 判断是否有父节点

void dfs(int u) {
    dp[u][1] = happy[u];  // 选择u的初始值
    
    for (int v : tree[u]) {
        dfs(v);  // 递归处理子节点
        
        // 状态转移
        dp[u][0] += max(dp[v][0], dp[v][1]);
        dp[u][1] += dp[v][0];
    }
}

int main() {
    int n;
    cin >> n;
    
    // 读取快乐指数
    for (int i = 1; i <= n; i++) {
        cin >> happy[i];
    }
    
    // 读取关系
    for (int i = 0; i < n - 1; i++) {
        int l, k;
        cin >> l >> k;  // k是l的直接上司
        tree[k].push_back(l);
        has_father[l] = true;
    }
    
    // 找到根节点（没有父节点的节点）
    int root = 1;
    while (has_father[root]) root++;
    
    dfs(root);
    
    cout << max(dp[root][0], dp[root][1]) << endl;
    
    return 0;
}