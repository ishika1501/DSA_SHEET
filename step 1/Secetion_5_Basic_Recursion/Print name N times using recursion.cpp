


#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   cout<<"Raj"<<endl;

   // Function call to print till i increments.
   func(i+1,n);

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(1,n);
  return 0;

}



Input:5
Output: GFG GFG GFG GFG GFG

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N == 0)return ;
        cout<<"GFG"<<" ";
        printGfg(N-1);
    }
};


