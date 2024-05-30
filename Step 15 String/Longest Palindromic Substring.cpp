class Solution {
public:
int expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        // Return the length of the palindrome found
        return right - left - 1;
}
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0,maxlen=0;

        for(int i=0 ;i<n ; i++){
            int len1=expandAroundCenter(s,i,i);
            int len2=expandAroundCenter(s,i,i+1);
            int len=max(len1,len2);

            if(len>maxlen){
                maxlen=len;
                start=i-(len-1)/2;
            }
        }
        return s.substr(start, maxlen);
    }
};