class Solution {
public:
    bool isPalindrome(int n) {
        long long dup=n;
        long long digi=0;
        while(n>0){
            long long rem = n%10;
            digi =(digi *10 )+ rem;
            n=n/10;
        }
        if(dup == digi)return true;
        else return false;
    }
};


// This code takes care of negative number 