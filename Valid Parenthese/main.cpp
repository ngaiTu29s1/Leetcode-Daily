#include <iostream>
#include <stack>
#include <string>

class Solution {
    public:
        bool isValid(std::string s) {
            std::stack<char> st;
            for (char c : s) {
                if (c == '(' || c == '{' || c == '['){
                    st.push(c);
                    continue;
                }
                if s.empty() return 0;
                if (st.top() == '(' && c == ')' ||
                    st.top() == '{' && c == '}' ||
                    st.top() == '[' && c == ']') {
                        st.pop();
                    } 
                else return 0;
            }
            return st.empty();
        }
    };

int main() {
    Solution sol;
     // Test cases
     std::string test1 = "()[]{}";
     std::string test2 = "(]";
     std::string test3 = "([)]";
     std::string test4 = "{[]}";
     std::string test5 = "";
 
     std::cout << "Test 1: " << test1 << " -> " << (sol.isValid(test1) ? "Valid" : "Invalid") << std::endl;
     std::cout << "Test 2: " << test2 << " -> " << (sol.isValid(test2) ? "Valid" : "Invalid") << std::endl;
     std::cout << "Test 3: " << test3 << " -> " << (sol.isValid(test3) ? "Valid" : "Invalid") << std::endl;
     std::cout << "Test 4: " << test4 << " -> " << (sol.isValid(test4) ? "Valid" : "Invalid") << std::endl;
     std::cout << "Test 5: " << test5 << " -> " << (sol.isValid(test5) ? "Valid" : "Invalid") << std::endl;
    return 0;
}