class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> strs;

        string curr = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                counts.push(num);
                strs.push(curr);

                num = 0;
                curr = "";
            }
            else if (ch == ']') {
                int repeat = counts.top();
                counts.pop();

                string prev = strs.top();
                strs.pop();

                string temp = prev;

                while (repeat--) {
                    temp += curr;
                }

                curr = temp;
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};