#include<bits/stdc++.h>

using namespace std;

void rotate(vector<int>& v){
	v[2] = 2;
}

int main()
{
	
	int arr[5] = {4, 5, 6, 7, 8};
	cout << arr[2] << endl;
	rotate(arr);
	cout << arr[2] << endl;
	return 0;
} 
