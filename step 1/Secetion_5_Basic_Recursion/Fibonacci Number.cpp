
RECURSIVE :

class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n <= 2) return 1;
        return fib(n-1)+fib(n-2);
    }
};



SPACE OPTIMIZED SOLUTION :

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n = 5;
	if (n == 0) {
	    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << 0;
	}
	else {
		int secondLast = 0;//for (i-2)th term
		int last = 1;//for (i-1)th term
		cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << secondLast << " " << last << " ";
		int cur; //for ith term
		for (int i = 2; i <= n; i++) {
			cur = last + secondLast;
			secondLast = last;
			last = cur;
			cout << cur << " ";
		}
	}
}
Time Complexity: O(N).
Space Complexity: O(1).


RECURSIVE:

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
   
   // Base Condition.
   if(N <= 1)
   {
       return N;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   int last = fibonacci(N-1);
   int slast = fibonacci(N-2);
   
   return last + slast;

}

int main(){
  
  // Here, let’s take the value of N to be 4.
  int N = 4;
  cout<<fibonacci(N)<<endl;
  return 0;

}

Time Complexity: O(2^N) 
Space Complexity: O(N)