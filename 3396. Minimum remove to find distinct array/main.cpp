#include <iostream>
#include <vector>
#include <set>

class Solution {
    public:
        int minimumOperations(std::vector<int>& nums) {
            int count = 0;
            std::set<int> uniq = {};
            while (1) {
                for (int num : nums) {
                    uniq.insert(num);
                }
                if (nums.size() != uniq.size()) {
                    if (nums.size() > 3) nums.erase(nums.begin(), nums.begin() + 3);
                    else return ++count;
                    count++;
                }
                else return count;
                uniq.clear();
            }
            return count;
        }
    };

int main() {
    Solution sol;
    std::vector<int> test1 = {1,2,3,4,2,3,3,5,7};
    std::vector<int> test2 = {4,5,6,4,4};
    std::vector<int> test3 = {6,7,8,9};

    std::vector<std::vector<int>> test = {test1, test2, test3};

    for (int i = 0; i < 3; i++) {
        std::cout << "Test " << i << "res: " << sol.minimumOperations(test[i]);
    }
}