#include <iostream>
#include <queue>

class Solution {
    public:
        bool isSubsequence(std::string s, std::string t) {
            std::queue<char> q;
            for (char c : t) {
                q.push(c);
            }
            int index = 0;
            while(!q.empty()) {
                if (s[index] == q.front()) {
                    index++;
                    q.pop();
                    continue;
                }
                q.pop();
            }
            return index == s.size();
        }
    };

int main() {
    Solution sol;
    std::string s = "abc", t = "ahbgdc";
    sol.isSubsequence(s, t);
    return 0;
}