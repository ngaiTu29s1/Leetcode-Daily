#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
    public:
        int minOperations(std::vector<int>& nums, int k) {
            std::unordered_set<int> uniq = {};
            for (int num : nums) {
                uniq.insert(num);
            }
            int min = *std::min_element(uniq.begin(), uniq.end());

            if (k > min) return -1;
            if (k == min) return (uniq.size() - 1);
            else return uniq.size();
        }
    };

int main() {
    Solution sol;
    std::vector<int> test1 = {5,2,5,4,5};
    std::vector<int> test2 = {2,1,2};
    std::vector<int> test3 = {9,7,5,3};
    std::vector<std::vector<int>> tests = {test1, test2, test3};
    for (std::vector<int> test : tests) {
        std::cout <<"Result: " << sol.minOperations(test, 2);
        std::cout << std::endl;
    }
    return 0;
}