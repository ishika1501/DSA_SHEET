Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}


#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
   int ans[n];
   for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
   }
   printArray(ans, n);
}
int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(arr, n);
   return 0;
}

Time Complexity: O(n), single-pass for reversing array.
Space Complexity: O(n), for the extra array used.


#include <iostream>
using namespace std;

//Function to reverse array 
void reverseArray(int arr[], int n) {
   int p1 = 0, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
   printArray(arr, n);
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1};
   reverseArray(arr, n);
   return 0;
}

Time Complexity: O(n), single-pass involved.
Space Complexity: O(1) 


void reverseArray(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray(arr, start + 1, end - 1);
   }
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1 };
   reverseArray(arr, 0, n - 1);
   printArray(arr, n);
   return 0;
}

Time Complexity: O(n)
Space Complexity: O(1)





