#include <bits/stdc++.h>

using namespace std;

void Merge(int A[], int start, int end, int middle){
    int* B = new int[end-start+1];
    int i = start, j = middle+1, k = 0;
    while(i<=middle && j<=end){
        if(A[i]<=A[j])B[k++]=A[i++];
        else B[k++]=A[j++];
    }
    while(i<=middle)B[k++]=A[i++];
    while(j<=end)B[k++]=A[j++];
    for(int i=start,k=0;i<=end;i++)
        A[i]=B[k++];
    delete[] B;
}
void MergeSort(int A[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        MergeSort(A, low, mid);
        MergeSort(A, mid+1, high);
        Merge(A, low, high, mid);
    }
}
int main()
{
    int B[] = {5, 4, 6, 7, 9};
    MergeSort(B, 0, 4);
    for(int i=0; i<5; i++)
        cout << B[i];
    return 0;
}
