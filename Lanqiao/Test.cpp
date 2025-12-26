#include<bits/stdc++.h>

using namespace std;

void Merge(int A[]){
	A[2] = 8;
}

int main()
{
	int A[] = {4, 8, 2};
	Merge(A);
	cout << A[2];
	return 0;
} 
