class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string result;
        stack<string>st;
        for(int i=0 ;i<s.length() ;i++){
            string word;
            if(s[i]==' ')continue;
            else {
                while(i<s.size() && s[i]!=' '){
                      word+=s[i]; 
                        i++;
                }      
            }
            st.push(word);
        }
        while(!st.empty()){
            result+=st.top();
            st.pop();
            if(!st.empty())result+=" ";
        }
        return result;
    }
};