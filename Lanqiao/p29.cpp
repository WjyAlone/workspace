#include <bits/stdc++.h>

using namespace std;

void putvec(vector<int>& Vec){
	int lenght = Vec.size();
	for (int i = 0; i < lenght; ++i)
	{
		cout << Vec[i] << ' ' ;
	}
	cout << endl;
}

int multiKnapsack1(int V, vector<int>& C, vector<int>& W, vector<int>& M) {
    int n = C.size();
    vector<int> dp(V + 1, 0);
    
    for (int i = 0; i < n; i++) {
        for (int k = 1; k <= M[i]; k++) {  
            for (int j = V; j >= C[i]; j--) {
            	putvec(dp);
                dp[j] = max(dp[j], dp[j - C[i]] + W[i]);
            }
        }
    }
    return dp[V];
}

int main(int argc, char const *argv[])
{
	int n, V;
	cin >> n >> V;
	vector<int> C;
	vector<int> W;
	vector<int> M;
	for(int i = 0;i<n;i++){
		int c, w, m;
		cin >> c >> w >> m;
		C.push_back(c);
		W.push_back(w);
		M.push_back(m);

	}
	int ans = multiKnapsack1(V, C, W, M);
	cout << ans << endl;
	return 0;
}
