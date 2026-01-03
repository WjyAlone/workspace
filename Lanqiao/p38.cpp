#include <iostream>
#include <vector>
#include <algorithm>  // for max

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> height(n);  // 使用vector
    
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }
    
    int* left = &height[0];  // 获取首指针
    int* right = &height[n - 1];  // 获取尾指针
    int max_area = 0;
    
    while (left < right) {
        int width = right - left;
        int min_height = min(*left, *right);
        max_area = max(max_area, min_height * width);
        
        if (*left < *right) {
            left++;
        } else {
            right--;
        }
    }
    
    cout << max_area << endl;
    return 0;
}