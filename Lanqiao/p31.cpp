#include <bits/stdc++.h>

using namespace std;
void Merge(int A[], int start, int end, int middle){
	int* B = new int[end-start+1];
	int i = start, j = middle+1, k = 0;
	while(i<=middle && j<=end){
		if(A[i]<=A[j])B[k++]=A[j++];
		else B[k++]=A[i++];
	}
	while(i<=middle)B[k++]=A[i++];
	while(j<=end)B[k++]=A[k++];
	for(int i=start,k=0;i<=end;i++)
		A[i]=B[k++];
	delete[] B;
}
int main()
{
	int *A = new int[5];
	int B[5];
	int c = 5;
	cout << ++c;
	return 0;
}
