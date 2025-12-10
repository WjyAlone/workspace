#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, c;
	cin >> a >> b >> c;
	int maxi = max({a, b, c});
	int mini = min({a, b, c});
	int middle = a+b+c-maxi-mini;
	if (mini + middle>maxi)
	{
		float p = (a+b+c)/2;

	}
	return 0;
}
