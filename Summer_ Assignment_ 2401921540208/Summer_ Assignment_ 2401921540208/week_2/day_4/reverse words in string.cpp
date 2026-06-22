class Solution {
public:
    string reverseWords(string s) {
        string word, result;
        
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                reverse(word.begin(), word.end());
                result += word;
                
                if (i != s.size()) result += ' ';
                word.clear();
            } else {
                word += s[i];
            }
        }
        
        return result;
    }
};