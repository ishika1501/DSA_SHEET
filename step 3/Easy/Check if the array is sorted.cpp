Approach: Brute Force
TC: O(2^N)
SC: o(1)
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[i])
        return false;
    }
  }
  return true;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5}, n = 5;
  bool ans = isSorted(arr, n);
  if (ans) cout << "True" << endl;
  else cout << "False" << endl;
  return 0;
}


Time Complexity: O(N)
Space Complexity: O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int size=nums.size();
        int count=0 ;
        for(int i=0 ;i<size ;i++){
            if(nums[i]>nums[(i+1)%size])count++;
        }
        return (count<=1);
    }
};