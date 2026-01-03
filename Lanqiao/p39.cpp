#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& v, char r){
	if (r=='r')
	{
		v[2], v[4] = v[4], v[2];
		v[3], v[4] = v[4], v[3];
		v[2], v[5] = v[5], v[2];
	}else{
		v[0], v[4] = v[4], v[0];
		v[1], v[5] = v[5], v[1];
		v[4], v[5] = v[5], v[4];
	}
}

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> grid(n, vector<int>(m, 0));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> grid[i][j];
		}
	}
	vector<int> rotation(6, 0);
	for (int i = 0; i < 6; ++i)
	{
		cin >> rotation[i];
	}

	return 0;
}