class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) 
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') 
            {
                st.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']') 
            {
                if (st.empty()) 
                {
                    return false;
                }

                if ((s[i] == ')' && st.top() != '(' ||
                     s[i] == '}' && st.top() != '{' ||
                     s[i] == ']' && st.top() != '['))
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};



// class Solution {
// public:
//     bool isValid(string s) {
//         while (s.find("()") != string::npos || 
//                s.find("[]") != string::npos || 
//                s.find("{}") != string::npos) 
//         {
//             for (int i = 0; i < s.length() - 1; i++) 
//             {
//                 if ((s[i] == '(' && s[i + 1] == ')' ||
//                      s[i] == '{' && s[i + 1] == '}'||
//                      s[i] == '[' && s[i + 1] == ']')) 
//                      {
//                         s.erase(i, 2);
//                         break;
//                      }
//             }
//         }
//         return s.empty();
//     }
// };