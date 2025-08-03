class Solution {
public:
    bool isValid(string s) {
        while (s.find("()") != string::npos || 
               s.find("[]") != string::npos || 
               s.find("{}") != string::npos) 
        {
            for (int i = 0; i < s.length() - 1; i++) 
            {
                if ((s[i] == '(' && s[i + 1] == ')' ||
                     s[i] == '{' && s[i + 1] == '}'||
                     s[i] == '[' && s[i + 1] == ']')) 
                     {
                        s.erase(i, 2);
                        break;
                     }
            }
        }
        return s.empty();
    }
};