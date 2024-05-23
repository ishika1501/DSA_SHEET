Find the Largest element in an array

TC: O(NlogN):

#include<bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2);
   
    return 0;
}





TC: O(N):

#include <bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n){
    int maxx = arr[0];
    for(int i=0 ;i<n ;i++){
        if(maxx<arr[i]){
            maxx=arr[i];
        }
    }
    return maxx;
}

int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int maxx = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << maxx << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  maxx = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << maxx<<endl;
  return 0;
}
