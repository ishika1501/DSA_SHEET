Example 1:
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.


#include<bits/stdc++.h>
using namespace std;


void counting_fun(int N){
    int count=0;
    while(N>0){
        count+=1;
        N=N/10;
    }
    cout<<count;
}

int main(){
    int a= 1234567;
    counting_fun(a);
    return 0;
}
