class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);   
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {     
                result += s[i];
            }
        }

        return stoll(result);       
    }
};
